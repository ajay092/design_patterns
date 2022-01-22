#ifndef PIZZA_STORE_H
#define PIZZA_STORE_H

#include <iostream>
#include <string>
#include "pizza.h"

using namespace std;

class PizzaStore
{
public:
    PizzaStore() {}
    virtual Pizza* CreatePizza(string item) = 0;
    virtual void OrderPizza(string item) = 0;
};

class NYPizzaStore : public PizzaStore
{
public:
    NYPizzaStore()
    {}
    
    Pizza* CreatePizza(string item)
    {
        IngredientFactory* ingredients_factory = new NYIngredientFactory();
        Pizza* pizza = nullptr;
        if (item == "cheese")
        {
            pizza = new CheesePizza(ingredients_factory);
        }
        else if (item == "veggie")
        {
            pizza = new VeggiePizza(ingredients_factory);
        }
        return pizza;

        delete ingredients_factory;
    }

    void OrderPizza(string item)
    {
        cout << "Ordering from New York store...\n";

        Pizza* pizza = CreatePizza(item);
        pizza->Prepare();
        delete pizza;
    }
};

class ChicagoPizzaStore : public PizzaStore
{
public:
    ChicagoPizzaStore() {}

    Pizza* CreatePizza(string item)
    {
        IngredientFactory* ingredients_factory = new ChicagoIngredientFactory();
        Pizza* pizza = nullptr;
        if (item == "cheese")
        {
            pizza = new CheesePizza(ingredients_factory);
        }
        else if (item == "veggie")
        {
            pizza = new VeggiePizza(ingredients_factory);
        }
        return pizza;

        delete ingredients_factory;
    }

    void OrderPizza(string item)
    {
        cout << "Ordering from Chicago store...\n";
        Pizza* pizza = CreatePizza(item);
        if (pizza)
        {
            pizza->Prepare();
            delete pizza;
        }
    }
};
#endif // !PIZZA_STORE_H

