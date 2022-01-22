#pragma once
#ifndef SUBJECT_H
#define SUBJECT_H

#include <iostream>
#include <set>
#include "observer.h"

using namespace std;

class Subject
{
private:
    int m_data = 0;
    set<Observer*> m_subscriberList;

public:
    Subject();
    Subject(int data);
    void SetData(int data);
    void Subscribe(Observer* observer);
    void UnSubscribe(Observer* observer);
};
#endif // !SUBJECT_H

