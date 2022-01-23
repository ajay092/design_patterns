#ifndef LIGHT_H
#define LIGHT_H

#include <iostream>

using namespace std;

enum class LightState
{
    ON = 0,
    OFF,
    HIGH,
    LOW
};

class Light
{
public:
    Light() {}

    void On()
    {
        cout << "Turning on light...\n";
    }

    void Off()
    {
        cout << "Turning off light...\n";
    }

    void High()
    {
        cout << "Increasing brightness...\n";
    }

    void Low()
    {
        cout << "Decreasing brightness...\n";
    }
};

#endif // !LIGHT_H

