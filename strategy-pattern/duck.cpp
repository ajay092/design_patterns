#include "duck.h"

Duck::Duck()
{
    m_name = "";
    m_flyBehaviour = nullptr;
}

Duck::Duck(string name, IFlyBehaviour *flyBehaviour):
    m_name(name),
    m_flyBehaviour(flyBehaviour)
{
    if (m_flyBehaviour == nullptr)
    {
        m_flyBehaviour = new NoFly();
    }
}

void Duck::Display()
{
    cout << "I am " << m_name << " duck...\n";
}

void Duck::PerformFly()
{
    m_flyBehaviour->fly();
}

void Duck::SetFlyBehaviour(IFlyBehaviour *flyBehaviour)
{
    m_flyBehaviour = flyBehaviour;
}

WoodDuck::WoodDuck(string name, IFlyBehaviour* flyBehaviour)
{
    m_name = name;
    m_flyBehaviour = flyBehaviour;
}

WildDuck::WildDuck(string name, IFlyBehaviour* flyBehaviour)
{
    m_name = name;
    m_flyBehaviour = flyBehaviour;
}

