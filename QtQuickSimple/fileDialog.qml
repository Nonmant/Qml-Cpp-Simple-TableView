import QtQuick 2.0
import QtQuick.Dialogs 1.0

FileDialog {
    id: fileDialog
    objectName: "fileDialog"
    title: "Please choose a file"
    folder: shortcuts.home

    onAccepted: {
        Qt.quit()
    }
    Component.onCompleted: visible = true
}


