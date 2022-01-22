#include "observer.h"

Observer::Observer()
{}

Observer::Observer(int data) :
    m_data(data)
{}

void Observer::DisplayData()
{}

void Observer::SetData(int data)
{
    m_data = data;
}

Observer1::Observer1(int data)
{
    m_data = data;
}

void Observer1::DisplayData()
{
    cout << "Observer 1 = " << m_data << "\n";
}

void Observer1::SetData(int data)
{
    m_data = data;
}

// Observer 2
Observer2::Observer2(int data)
{
    m_data = data;
}

void Observer2::DisplayData()
{
    cout << "Observer 2 = " << m_data << "\n";
}

void Observer2::SetData(int data)
{
    m_data = data;
}

//Observer3
Observer3::Observer3(int data)
{
    m_data = data;
}

void Observer3::DisplayData()
{
    cout << "Observer 3 = " << m_data << "\n";
}

void Observer3::SetData(int data)
{
    m_data = data;
}