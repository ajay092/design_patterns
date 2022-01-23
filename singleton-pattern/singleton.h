#ifndef SINGLETON_H
#define SINGLETON_H

#include <iostream>

using namespace std;

//class Singleton
//{
//private:
//    //static Singleton& m_instance;
//    Singleton() { cout << "Creating singleton...\n"; }
//
//public:
//
//    Singleton(const Singleton&) = delete;
//
//    static Singleton& Get()
//    {
//        static Singleton m_instance;
//        return m_instance;
//    }
//
//    void DoSomething()
//    {
//        cout << "Doing something from the singleton class...\n";
//    }
//};

class Singleton
{
    static Singleton* m_instance;
    Singleton() { cout << "Creating singleton...\n"; }

public:
    ~Singleton()
    {
        if (m_instance)
            delete m_instance;
    }

    static Singleton* Get()
    {
        if (m_instance == nullptr)
        {
            m_instance = new Singleton();
        }
        return m_instance;
    }

    void DoSomething()
    {
        cout << "Doing something from the singleton class...\n";
    }
};

#endif // !SINGLETON_H

