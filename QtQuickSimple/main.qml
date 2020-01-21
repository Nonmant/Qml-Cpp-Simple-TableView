import QtQuick 2.2
import QtQuick.Window 2.0
import QtQuick.Controls 1.2
import QtQuick.Layouts 1.0
import QtQuick.Dialogs 1.0

Window {
    id:windowMain
    objectName: "windowMain"
    visible: true
    width: 640
    height: 480
    title: qsTr("Text file table viewer")
    signal qmlFilePathAccepted(url filePath)
    signal qmlGetDict(string uid, string name, string phone)
    onQmlGetDict:{
        listModel.append({"uid":uid, "name":name, "phone": phone})
    }

    FileDialog {
        id: fileDialog
        objectName: "fileDialog"
        title: "Please choose a file"
        folder: shortcuts.home

        onAccepted: {
            fileDialog.close()
            qmlFilePathAccepted(fileDialog.fileUrl)
        }
    }

    ColumnLayout{
        spacing: 2
        anchors.fill: parent

        TableView {
            id: tableView
            objectName: "tableView"
            anchors.fill: parent

            function setLastColumnWidth() {
                columnPhone.width = tableView.contentItem.width-columnId.width-columnName.width;
                }
            onWidthChanged: setLastColumnWidth()

            TableViewColumn {
                id: columnId
                title: "Id"
                role: "uid"
                onWidthChanged: tableView.setLastColumnWidth()
            }
            TableViewColumn {
                id: columnName
                title: "Name"
                role: "name"
                onWidthChanged: tableView.setLastColumnWidth()
            }
            TableViewColumn {
                id: columnPhone
                title: "Phone"
                role: "phone"
                resizable: false
            }

            model: ListModel {
                id: listModel
                objectName: "listModel"
                /*
                ListElement {
                    uid: "Moby-Dick"
                    name: "Herman Melville"
                    phone:"798798"
                }
                */
            }
        }


        Button {
            id:buttonFile
            objectName: "buttonFile"
            text: "Open file"
            anchors.right: parent.right
            anchors.bottom: parent.bottom
            signal qmlBtnFileClicked()
            onClicked: fileDialog.open()
        }

    }
}

