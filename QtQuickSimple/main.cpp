#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlComponent>
#include "backend.h"

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    QQmlComponent component(&engine,
            "qrc:/main.qml");
    auto qmlObj = component.create();

    auto backend = new Backend();

    QObject::connect(qmlObj, SIGNAL(qmlFilePathAccepted(QUrl)),
                     backend, SLOT(cppFilePath(QUrl)));

    QObject::connect(backend, SIGNAL(cppSendDict(QString,QString,QString)),
                     qmlObj, SIGNAL(qmlGetDict(QString,QString,QString)));

    //auto qmlTableView = qmlObj->findChild<QObject*>("tableView");

    return app.exec();
}
