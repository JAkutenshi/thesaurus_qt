#ifndef ENTRYMODEL_H
#define ENTRYMODEL_H

#include <QObject>
#include <QAbstractItemModel>

class EntryModel : public QAbstractItemModel
{
    Q_OBJECT

public:
    EntryModel(QObject* parent = nullptr);

    QModelIndex index(int row, int column, const QModelIndex &parent = QModelIndex()) const override;
    QModelIndex parent(const QModelIndex &child) const override;
    int rowCount(const QModelIndex &parent = QModelIndex()) const override;
    int columnCount(const QModelIndex &parent = QModelIndex()) const override;
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;
};

#endif // ENTRYMODEL_H
