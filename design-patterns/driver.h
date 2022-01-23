#ifndef DRIVER_H
#define DRIVER_H

#include "strategy-pattern/duck.h"
#include "strategy-pattern/fly_behaviour.h"
#include "observer-pattern/subject.h"
#include "observer-pattern/observer.h"
#include "factory-pattern/pizza.h"
#include "factory-pattern/pizza_ingredients_factory.h"
#include "factory-pattern/pizza_store.h"
#include "singleton-pattern/singleton.h"
#include "command-pattern/command.h"
#include "command-pattern/light.h"

/*
*   Driver class to run different scenarios
*/

class Driver
{
public:
    Driver();
    void RunStrategyPattern();
    void RunObserverPattern();
    void RunDecoratorPattern();
    void RunBuilderPattern();
    void RunFactoryPattern();
    void RunSingletonPattern();
    void RunCommandPattern();

};
#endif // !DRIVER_H

