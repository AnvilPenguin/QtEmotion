import socket
import threading
import new_detect
import json

HOST = '127.0.0.1'
PORT = 65432


def send_json(sock, data_type, label):
    message = {
        "type": data_type,
        "value": label
    }
    sock.sendall(json.dumps(message).encode("utf-8"))


def main():
    print("main()")
    threading.Thread(target=new_detect.detect_emotion, daemon=True).start()
    with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as server_socket:
        server_socket.bind((HOST, PORT))
        server_socket.listen()
        print(f"[Python] Server listening on {HOST}:{PORT}...")

        while True:
            conn, addr = server_socket.accept()
            print(f"[Python] Connected by {addr}")
            with conn:
                buffer = ""
                while True:
                    try:
                        raw_data = conn.recv(1024).decode('utf-8')
                        if not raw_data:
                            print("[Python] Client disconnected.")
                            break

                        buffer += raw_data
                        while "\n" in buffer:
                            line, buffer = buffer.split("\n", 1)
                            if not line.strip():
                                continue
                            print(f"[Python] Received: {line}")
                            try:
                                data = json.loads(line)
                                if data["command"] == "get_result":
                                    result = new_detect.get_result()
                                    send_json(conn, "result", result)
                                    print(f"[Python] Sent result: {result}")
                                elif data["command"] == "get_frame":
                                    frame, _ = new_detect.get_frame()
                                    send_json(conn, "frame", frame)
                                    print(f"[Python] Sent frame")
                                else:
                                    conn.sendall(b"Unknown command\n")
                            except json.JSONDecodeError as e:
                                print(f"[Python] JSON error: {e}")
                                conn.sendall(b"Invalid JSON\n")

                    except ConnectionResetError:
                        print("[Python] Connection reset by client.")
                        return

if __name__ == "__main__":
    main()
