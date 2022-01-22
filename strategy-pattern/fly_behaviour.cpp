#include "fly_behaviour.h"

IFlyBehaviour::IFlyBehaviour()
{}

void IFlyBehaviour::fly()
{
    cout << "Unknown fly behaviour...\n";
}

// Implementation of fly behaviour sub classes
NoFly::NoFly()
{}

void NoFly::fly()
{
    cout << "Cannot fly...\n";
}

FlyWithWings::FlyWithWings()
{}

void FlyWithWings::fly()
{
    cout << "Flying with wings...\n";
}