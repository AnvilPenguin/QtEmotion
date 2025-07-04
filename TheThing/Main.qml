import QtQuick
import QtQuick.Controls
import QtQuick.Layouts

ApplicationWindow {
    visible: true
    width: 800
    height: 600
    title: "PySocket Client"
    property bool listSettingsVisible: false
    property int refreshVersion: 0

    Image {
        id: btnSettings
        source: "assets/images/icon_settings.png"
        height: 64
        width: 64
        anchors {
            top: parent.top
            right: parent.right
            margins: 12
        }
        transform: Rotation {
            id: rotationTransform
            angle: 0
            origin.x: btnSettings.width / 2
            origin.y: btnSettings.height / 2
        }

        MouseArea {
            anchors.fill: parent
            onClicked: {
                listSettingsVisible = !listSettingsVisible
                animRotate.to = rotationTransform.angle === 0 ? 45 : 0
                animRotate.start()
            }
        }

        NumberAnimation {
            id: animRotate
            target: rotationTransform
            property: "angle"
            duration: 200
            easing.type: Easing.InOutQuad
        }
    }

    Image {
        id: imgFace
        source: "assets/images/neutral.png"
        height: 400
        width: 400
        anchors.centerIn: parent
    }

    Column {
        id: listSettings
        visible: true
        anchors {
            horizontalCenter:btnSettings.horizontalCenter
            top: btnSettings.bottom
            margins: 4
        }
        spacing: 4

        transformOrigin: Item.Top

        states: [
            State {
                name: "Expanded"
                when: listSettingsVisible
                PropertyChanges {
                    target: listSettings
                    opacity: 1
                    scale: 1.0
                }
            },

            State {
                name: "Collapsed"
                when: !listSettingsVisible
                PropertyChanges {
                    target: listSettings
                    opacity: 0
                    scale: 0.0
                }
            }
        ]

        transitions: [
            Transition {
                to: "*"
                NumberAnimation {
                    properties: "opacity, scale"; duration: 200; easing.type: Easing.Linear
                }
            }
        ]

        Image {
            source: "assets/images/python.png"
            width: 64
            height: 64

            MouseArea {
                anchors.fill: parent
                onClicked: popupPython.open()
            }
        }

        Image {
            source: "assets/images/opencv.png"
            width: 64
            height: 64
            MouseArea {
                anchors.fill: parent
                onClicked: popupConnect.open()
            }
        }

        Image {
            source: "assets/images/esp.png"
            width: 64
            height: 64
            MouseArea {
                anchors.fill: parent
                onClicked: popupEsp.open()
            }
        }
    }

    ItemPopup {
        id: popupPython

        Text {
            id: txtPythonStatus
            text: ""
            anchors {
                bottom: btnStart.top
                horizontalCenter: btnStart.horizontalCenter
                margins: 5
            }
        }

        Button {
            id: btnStart
            anchors {
                centerIn: parent
            }
            visible: pySocket.isPythonRunning ? false : true
            text: "Start Server"
            onClicked: {
                pySocket.serverStart()
            }
        }

    }

    ItemPopup {
        id: popupConnect
        Text {
            id: txtConnectTitle
            text: "Connect to Python"
            anchors {
                bottom: txtConnectStatus.top
                horizontalCenter: txtConnectStatus.horizontalCenter
                margins: 5
            }
        }
        Text {
            id: txtConnectStatus
            text: pySocket.isSocketConnected ? "Staus: Connected" : "Staus: Disconnected"
            anchors {
                bottom: btnConnect.top
                horizontalCenter: btnConnect.horizontalCenter
                margins: 5
            }
        }

        Button {
            id: btnConnect
            anchors {
                centerIn: parent
            }
            text: pySocket.isSocketConnected ? "Disconnect" : "Connect"
            onClicked: {
                if (pySocket.isSocketConnected === false) {
                    pySocket.socketConnect()
                } else {
                    pySocket.socketDisconnect()
                }
            }
        }
    }

    ItemPopup {
        id: popupEsp

        Text {
            id:txtEspTitle
            anchors {
                bottom: btnEspManual.top
                horizontalCenter: btnEspManual.horizontalCenter
                margins: 5
            }
            text: "Set Manual:"
        }

        Switch {
            id: btnEspManual
            anchors {
                bottom: txtEspIp.top
                horizontalCenter: txtEspIp.horizontalCenter
                margins: 5
            }
            text: ""
            checked: false
            onToggled: {
                if (checked) {
                    emotionHandler.setIsManual(true)
                }
                else {
                    emotionHandler.setIsManual(false)
                }
            }
        }

        Text {
            id:txtEspIp
            anchors {
                centerIn: parent
                margins: 5
            }
            text: "Set Ip:"
        }

        TextField {
            id: txtFieldIp
            anchors {
                top: txtEspIp.bottom
                horizontalCenter: txtEspIp.horizontalCenter
                margins: 5
            }
            placeholderText: "IP"
            text: espNetwork.esp32Ip
        }

        Button {
            id: btnEspIp
            anchors {
                left: txtFieldIp.right
                verticalCenter: txtFieldIp.verticalCenter
                margins: 5
            }
            enabled: inputField.text.length > 0
            text: "Confirm"
            onClicked: {
                espNetwork.setEsp32Ip(txtFieldIp.text)
            }
        }

        Text {
            id:txtEspSpeed
            anchors {
                top: txtFieldIp.bottom
                horizontalCenter: txtEspIp.horizontalCenter
                margins: 5
            }
            text: "Set Speed:"
        }

        Slider {
            id: sliderSpeed
            anchors {
                top: txtEspSpeed.bottom
                horizontalCenter: txtEspSpeed.horizontalCenter
                margins: 5
            }
            from: 0
            to: 200
            value: 100
            stepSize: 1
            property real lastCommittedValue: value

            onValueChanged: {
                txtEspSpeedValue.text = value
            }

            onPressedChanged: {
                if (!pressed) {
                    console.log("Final value after release:", value)
                    lastCommittedValue = value
                    espNetwork.setSpeed(value)

                }
            }
        }

        Text {
            id:txtEspSpeedValue
            anchors {
                left: sliderSpeed.right
                verticalCenter: sliderSpeed.verticalCenter
                margins: 5
            }
            text: espNetwork.speed
        }
    }

    Image {
        id: imgResult
        source: pySocket.isSocketConnected ? "image://emotion/id?v=" + refreshVersion : ""
        cache: false
        height: 128
        width: 128
        fillMode: Image.PreserveAspectFit
        anchors {
            top: parent.top
            left: parent.left
        }
    }

    Dpad {
        id: dpad
        anchors {
            left: parent.left
            bottom: parent.bottom
        }
        visible: emotionHandler.isManual ? true : false
    }

    Connections {
        target: pySocket
        function onResultChanged() {
            if (pySocket.result === "neutral") {
                imgFace.source = "assets/images/neutral.png"
            } else if (pySocket.result === "happy") {
                imgFace.source = "assets/images/happy1.png"
            } else if (pySocket.result === "angry") {
                imgFace.source = "assets/images/angry.png"
            } else if (pySocket.result === "surprise") {
                imgFace.source = "assets/images/surprise.png"
            } else {
                imgFace.source = "assets/images/neutral.png"
            }
        }

        function onImageChanged() {
            refreshVersion++
        }

        function onIsSocketConnectedChanged() {
            imgFace.source = "assets/images/neutral.png"
        }
    }
}


