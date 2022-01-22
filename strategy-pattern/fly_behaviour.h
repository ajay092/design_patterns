#pragma once
#ifndef FLY_BEHAVIOUR_H
#define FLYBEHAVIOUR_H

#include <iostream>

using namespace std;

/*
*   Duck flying behaviour interface. Encapsulated a bunch of algorithms(implementation of a behaviour) which are now decoupled from the duck class
*/

class IFlyBehaviour
{
public:
    IFlyBehaviour();
    virtual void fly();
};

// fly behaviour implementations
class NoFly : public IFlyBehaviour
{
public:
    NoFly();
    void fly();
};

class FlyWithWings : public IFlyBehaviour
{
public:
    FlyWithWings();
    void fly();
};

#endif // !FLY_BEHAVIOUR_H

