#include "subject.h"

Subject::Subject()
{}

Subject::Subject(int data):
    m_data(data)
{}

void Subject::SetData(int data)
{
    m_data = data;

    for (auto &obj : m_subscriberList)
    {
        obj->SetData(m_data);
    }
}

void Subject::Subscribe(Observer* observer)
{
    if (m_subscriberList.find(observer) == m_subscriberList.end())
    {
        m_subscriberList.insert(observer);
    }
}

void Subject::UnSubscribe(Observer* observer)
{
    if (m_subscriberList.find(observer) != m_subscriberList.end())
    {
        m_subscriberList.erase(observer);
    }
}
