import base64

import cv2
import numpy as np
import tensorflow as tf

# Load pre-trained emotion classification model
model = tf.keras.models.load_model('detect_emotion_fine_tuned_final_2.keras')

# Define class names (ensure this matches training order)
class_names = ["angry", "happy", "neutral", "surprise"]

# Load OpenCV's Haar cascade face detector
face_cascade = cv2.CascadeClassifier(cv2.data.haarcascades + 'haarcascade_frontalface_default.xml')

# Set image size used during model training
img_size = 224


result = ""
last_frame = None

def get_result():
    return result

def get_frame():
    global last_frame
    if last_frame is not None:
        success, buffer = cv2.imencode('.jpg', last_frame)
        if success:
            img_bytes = buffer.tobytes()
            img_base64 = base64.b64encode(img_bytes)
            img_str = img_base64.decode('utf-8')
            # print(f"get_frame(): {img_str}")
            return img_str, len(img_bytes)
    return "", 0

def detect_emotion() :
    global result, last_frame
    # capped_result = 5
    # frame_result = 0
    # Start webcam
    cap = cv2.VideoCapture(0)
    if not cap.isOpened():
        print("Error: Could not open webcam.")
        exit()

    while True:
        ret, frame = cap.read()
        if not ret:
            break

        # Convert to grayscale for face detection
        gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)

        # Detect faces
        faces = face_cascade.detectMultiScale(gray, scaleFactor=1.3, minNeighbors=5)

        # Process each face
        for (x, y, w, h) in faces:
            face = frame[y:y+h, x:x+w]

            # Preprocess face for model
            face_resized = cv2.resize(face, (img_size, img_size))
            face_normalized = face_resized.astype(np.float32) / 255.0
            face_input = np.expand_dims(face_normalized, axis=0)

            # Predict emotion
            prediction = model.predict(face_input, verbose=0)
            class_id = np.argmax(prediction)
            class_label = class_names[class_id]
            confidence = prediction[0][class_id]


            # Draw results
            label = f"{class_label} ({confidence*100:.1f}%)"
            cv2.rectangle(frame, (x, y), (x+w, y+h), (0, 255, 0), 2)
            cv2.putText(frame, label, (x, y-10), cv2.FONT_HERSHEY_SIMPLEX, 0.9,
                        (36, 255, 12), 2)

            # Get result
            result = class_label
            last_frame = face
            # frame_result += 1

        # Show output
        cv2.imshow("Emotion Detection", frame)

        # Press 'q' to quit
        if cv2.waitKey(1) & 0xFF == ord('q'):
            break

    # Cleanup
    cap.release()
    cv2.destroyAllWindows()

# detect_emotion()


