# Qml-C-Simple-TableView
Loads text from file and fulfills table with it

Example of Qml interface with Cpp background usage.
main.cpp contains main function, that creates UI window, background worker object and establishes all connections between them, using signals and slots.
Backend (cpp/h) - class, that reads text from text file line by line (in stream), splits it to a separate parts and sends them with signal.
main.qml holds all the interface: mainWindow, fileDialog window, tableView and button in a columnLayout.

![ui](https://github.com/Nonmant/Qml-C-Simple-TableView/blob/master/QtQuickSimpleUI.png?raw=true)

Programm work sequence step by step:
1. main.cpp creates main.qml interface from qrc, creates Backend object. Connects them with signals and slots.
2. User clicks on button. onClicked event handler opens fileDialog.
3. On successful acception on file, onAccepted event handler of fileDialog called. Within it called signal qmlFilePathAccepted that transmits choosen url to Backend object.
4. Backend object in a corresponding slot opens file, begin to read it line by line. Each line transmitted to processFileLine function, that separates it by semicolon char. Strings from this line sends by cppSendDict to qmlGetDict signal.
5. Signal handler onQmlGetDict attaches strings to listModel of the TableView.

Besides that, on columns and table width change attached handler, that sets last column width in order to fit inside the table.


No foolproof.
Example file is [QtQuickSimpleTestFile.txt](https://github.com/Nonmant/Qml-C-Simple-TableView/blob/master/QtQuickSimpleTestFile.txt).
