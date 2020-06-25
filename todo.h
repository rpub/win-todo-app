#ifndef TODO_H
#define TODO_H

#include <QAbstractTableModel>
#include <vector>

class toDo: public QAbstractTableModel{
public:
    toDo(QObject *parent);
    int rowCount(const QModelIndex &parent) const;
    int columnCount(const QModelIndex &parent) const;

    QVariant data(const QModelIndex &index, int role) const;
    void openFile(QString filePath);

private:
    std::vector<QString> tasks;
};

#endif // TODO_H
