#include "database.hpp"
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>

//ID NAME DATE PARENT_ID PATH
#define DOC_CATEGOTY_CREATE_SQL "CREATE TABLE T_DOC_CATEGOTY (ID INTEGER PRIMARY KEY AUTOINCREMENT,NAME TEXT,PARENT_ID INTEGER,PATH TEXT, DATE TEXT)"

Database::Database(QString fileName):
    m_fileName(fileName)
{
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName(fileName);
    if (!database.open()) {
        qDebug() << "Error: Failed to connect database." << database.lastError();
    }
    else {
        qDebug() << "Succeed to connect database." ;
    }

    initTable();
}

Database::~Database() {
    if(database.isOpen()) {
        database.close();
    }
}

bool Database::tableExists(QString tableName) {
    QSqlQuery sql_query;
    sql_query.prepare("SELECT count(1) FROM sqlite_master WHERE type='table' AND name=:name");
    sql_query.bindValue(":name", tableName);
    if(!sql_query.exec())
    {
        qDebug()<<sql_query.lastError();
        return false;
    }
    else
    {
        sql_query.next();
        int count = sql_query.value(0).toInt();
        if(count > 0) {
            return true;
        } else {
            return false;
        }
    }
}

void Database::initTable() {
    if(!database.isOpen()) {
        return;
    }
    QSqlQuery sql_query;

    if(!tableExists("T_DOC_CATEGOTY")) {
        qDebug() << "DOC_CATEGOTY_CREATE_SQL";
        sql_query.exec(DOC_CATEGOTY_CREATE_SQL);
    }
}
