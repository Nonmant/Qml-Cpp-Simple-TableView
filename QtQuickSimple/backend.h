#ifndef BACKEND_H
#define BACKEND_H

#include <QObject>
#include <QUrl>
#include <QFile>
#include <QTextStream>

class Backend : public QObject
{
    Q_OBJECT
private:
    void processFileLine(QString line);
public:
    Backend();
signals:
    void cppSendDict(QString uid, QString name, QString phone);
public slots:
    void cppFilePath(QUrl path);
};

#endif // BACKEND_H
