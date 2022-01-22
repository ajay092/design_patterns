#pragma once
#ifndef OBSERVER_H
#define OBSERVER_H

#include <iostream>

using namespace std;

class Observer
{
public:
    int m_data = 0;

    Observer();
    Observer(int data);

    virtual void DisplayData();
    virtual void SetData(int data);
};

class Observer1 : public Observer
{
public:
    Observer1(int data);

    void DisplayData();
    void SetData(int data);
};

class Observer2 : public Observer
{
public:
    Observer2(int data);

    void DisplayData();
    void SetData(int data);
};

class Observer3 : public Observer
{
public:
    Observer3(int data);

    void DisplayData();
    void SetData(int data);
};

#endif // !OBSERVER_H

