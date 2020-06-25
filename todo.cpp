#include "todo.h"

#include <QFile>
#include <QMessageBox>
#include <QTextStream>
#include <iostream>

toDo::toDo(QObject *parent):QAbstractTableModel(parent){}
int toDo::rowCount(const QModelIndex &parent) const { return tasks.size(); }
int toDo::columnCount(const QModelIndex &parent) const { return 1; }

/* Read Data */
QVariant toDo::data(const QModelIndex &index, int role) const{
    if (role == Qt::DisplayRole) {
            return tasks.at(index.row());
        }
    return QVariant();
}

/* Open File */
void toDo::openFile(QString filePath){
    QFile file(filePath);
    if(!file.open(QIODevice::ReadOnly)) {
        QMessageBox::information(0, "error", file.errorString());
        return;
    }

    QTextStream in(&file);

    tasks.clear(); // Clear item

    for(int i = 0; !in.atEnd(); i++) {
        QString line = in.readLine();
        QStringList fields = line.split(",");

        tasks.push_back(fields[0]); // Push data to model
    }
    file.close();
    emit layoutChanged();
}
