#ifndef DOCCATEGORY_HPP
#define DOCCATEGORY_HPP

#include <QString>

class DocCategory
{
public:
    DocCategory();

    DocCategory(qint32 id, QString name, qint32 parent_id, QString path, QString date);

    inline void setId(qint32 id){this->m_id = id;}
    inline qint32 id(){ return this->m_id;}

    inline void setName(QString name){this->m_name = name;}
    inline QString name(){ return this->m_name;}

    inline void setParentId(qint32 parent_id){this->m_parent_id = parent_id;}
    inline qint32 parentId(){ return this->m_parent_id;}

    inline void setPath(QString path){this->m_path = path;}
    inline QString path(){ return this->m_path;}

    inline void setDate(QString date){this->m_date = date;}
    inline QString date(){ return this->m_date;}

private:
    qint32 m_id;
    QString m_name;
    qint32 m_parent_id;
    QString m_path;
    QString m_date;
};

#endif // DOCCATEGORY_HPP
