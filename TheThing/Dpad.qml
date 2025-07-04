import QtQuick
import QtQuick.Controls 2.15

Item {
    id: itemDpad
    width: 240
    height: 240
    // x: (parent.width - width)
    // y: (parent.height - height)
    Image {
        id: btnCenter
        anchors {
            centerIn: parent
            margins: 5
        }
        source: "assets/images/center.png"
        width: 64
        height: 64
        MouseArea {
            anchors.fill: parent
            onClicked: {
                espNetwork.sendCommand("stop")
            }
        }
    }

    Image {
        id: btnUp
        anchors {
            horizontalCenter: btnCenter.horizontalCenter
            bottom: btnCenter.top
            margins: 5
        }
        source: "assets/images/up.png"
        width: 64
        height: 64
        MouseArea {
            anchors.fill: parent
            onClicked: {
                espNetwork.sendCommand("forward")
            }
        }
    }

    Image {
        id: btnDown
        anchors {
            horizontalCenter: btnCenter.horizontalCenter
            top: btnCenter.bottom
            margins: 5
        }
        source: "assets/images/down.png"
        width: 64
        height: 64
        MouseArea {
            anchors.fill: parent
            onClicked: {
                espNetwork.sendCommand("backward")
            }
        }
    }

    Image {
        id: btnLeft
        anchors {
            verticalCenter: btnCenter.verticalCenter
            right: btnCenter.left
            margins: 5
        }
        source: "assets/images/left.png"
        width: 64
        height: 64
        MouseArea {
            anchors.fill: parent
            onClicked: {
                espNetwork.sendCommand("rotateLeft")
            }
        }
    }

    Image {
        id: btnRight
        anchors {
            verticalCenter: btnCenter.verticalCenter
            left: btnCenter.right
            margins: 5
        }
        source: "assets/images/right.png"
        width: 64
        height: 64
        MouseArea {
            anchors.fill: parent
            onClicked: {
                espNetwork.sendCommand("rotateRight")
            }
        }
    }

    Slider {
        id: slider
        anchors {
            top: parent.top
            left: parent.left
        }

        from: 0
        to: 200
        value: 100
        stepSize: 1
        property real lastCommittedValue: value

        onPressedChanged: {
            if (!pressed) {
                console.log("Final value after release:", value)
                lastCommittedValue = value
                // Send value here, e.g., to ESP32 or server
            }
        }
    }
}
