import QtQuick
import QtQuick.Controls

Popup {
    id: itemPopup
    width: 400
    height: 300
    modal: true
    focus: true
    closePolicy: Popup.CloseOnEscape | Popup.CloseOnPressOutside

    x: (parent.width - width) /2
    y: (parent.height - height) / 2

    Rectangle {
        anchors.fill: parent
        color: "lightblue"
        border.color: "gray"
    }

    Connections{
        target: pySocket
        function onIsSocketConnectedChanged() {
            itemPopup.close()
        }

        function onIsPythonRunningChanged() {
            itemPopup.close()
        }
    }
}

