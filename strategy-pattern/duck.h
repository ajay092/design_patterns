#pragma once
#ifndef DUCK_H
#define DUCK_H

#include <iostream>
#include <string>
#include "fly_behaviour.h"

using namespace std;

/*
*   Base duck class. Follows the example in "Head First Design Patterns"
*/

class Duck
{
public:
    string m_name = "";
    IFlyBehaviour* m_flyBehaviour = nullptr;

    Duck();
    Duck(string name, IFlyBehaviour* flyBehaviour);
    void SetFlyBehaviour(IFlyBehaviour *flyBehaviour);
    void PerformFly();
    void Display();
};

/*
*   Derived duck classes, basically represents different types of requirement a user can expect.
*/

class WoodDuck : public Duck
{
public:
    WoodDuck(string name, IFlyBehaviour* flyBehaviour);
};

class WildDuck : public Duck
{
public:
    WildDuck(string name, IFlyBehaviour* flyBehaviour);
};
#endif // !DUCK_H
