#include "doccategory.hpp"

DocCategory::DocCategory()
{

}

DocCategory::DocCategory(qint32 id, QString name, qint32 parent_id, QString path, QString date) {
    this->m_id = id;
    this->m_name = name;
    this->m_parent_id = parent_id;
    this->m_path = path;
    this->m_date = date;
}
