#ifndef COMMAND_H
#define COMMAND_H

#include <iostream>
#include "light.h"
using namespace std;

class ICommand
{
public:
    virtual void Execute() = 0;
    virtual void UnExecute() = 0;
};

class LightComand : ICommand
{
public:
    Light& m_light;
    LightState m_state;

public:
    LightComand(Light& light, LightState state):
        m_light(light),
        m_state(state)
    {}

    void Execute()
    {
        switch (m_state)
        {
        case LightState::ON:
            m_light.On();
            break;

        case LightState::OFF:
            m_light.Off();
            break;

        case LightState::HIGH:
            m_light.High();
            break;

        case LightState::LOW:
            m_light.Low();
            break;

        default:
            break;
        }
    }

    void UnExecute()
    {
        switch (m_state)
        {
        case LightState::ON:
            m_light.Off();
            break;

        case LightState::OFF:
            m_light.On();
            break;

        case LightState::HIGH:
            m_light.Low();
            break;

        case LightState::LOW:
            m_light.High();
            break;
        
        default:
            break;
        }
    }

};
#endif // !COMMAND_H

