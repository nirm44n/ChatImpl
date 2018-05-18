import QtQuick 2.9
import QtQuick.Window 2.2
import QtQuick.Controls 2.3



Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    Text {
        id: text1
        x: 20
        y: 19
        text: qsTr("Nirmaan")
        font.pixelSize: 12
    }


    TextField {
        id: textInput
        x: 20
        y: 44
        width: 478
        height: 35
        font.pixelSize: 12
        placeholderText: qsTr("Enter Message ...")
    }

    Text {
        id: textInput1
        x: 35
        y: 230
        width: 80
        height: 20
        text: qsTr("Coding Challenge")
        font.pixelSize: 12
    }

    Button {
        id: button
        x: 497
        y: 44
        width: 95
        height: 35
        text: qsTr("Send")
        onClicked: {
            print("It Works")
        }

    }

    Button {
        id: button1
        x: 497
        y: 256
        width: 95
        height: 35
        text: qsTr("Send")
        onClicked: {
            print("It Works")
        }
    }

    TextField {
        id: textInput3
        x: 20
        y: 256
        width: 478
        height: 35
        font.pixelSize: 12
        placeholderText: qsTr("Enter Message ...")
    }


    TextArea {
        id: textArea
        x: 20
        y: 85
        width: 572
        height: 123
        text: qsTr("")
    }

    TextArea {
        id: textArea1
        x: 20
        y: 297
        width: 572
        height: 123
        text: qsTr("")
    }


}
