#include "backend.h"

Backend::Backend()
{

}

void Backend::cppFilePath(QUrl path){
 QFile file(path.toString().mid(QString("file:///").length()));
 if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
         return;
 QTextStream in(&file);
     while (!in.atEnd()) {
         QString line = in.readLine();
         processFileLine(line);
     }
}

void Backend::processFileLine(QString line){
 auto words=line.split(';', QString::SkipEmptyParts);
 for(auto word:words){
     word=word.trimmed();
 }
 cppSendDict(words[0], words[1], words[2]);
}
