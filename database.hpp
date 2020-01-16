#ifndef DATABASE_HPP
#define DATABASE_HPP

#include <QString>
#include <QSqlDatabase>

class Database
{
public:
    Database(QString fileName);
    ~Database();

    bool tableExists(QString tableName);
    void initTable();
private:
    QString m_fileName;
    QSqlDatabase database;
};

#endif // DATABASE_HPP
