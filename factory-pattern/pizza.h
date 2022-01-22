#ifndef PIZZA_H
#define PIZZA_H

#include <iostream>
#include <string>
#include "pizza_ingredients_factory.h"

class Pizza
{
public:
    IngredientFactory* m_factory;
    string m_dough;
    string m_sauce;
    string m_toppings;

    Pizza(IngredientFactory* factory):
        m_factory(factory)
    {}

    virtual void Prepare() {}
};

class CheesePizza : public Pizza
{
public:
    CheesePizza(IngredientFactory* factory) :
        Pizza(factory)
    {
        cout << "Creating a cheese pizza...\n";
    }

    void Prepare()
    {
        m_dough = m_factory->CreateDough();
        m_sauce = m_factory->CreateSauce();
        m_toppings = m_factory->CreateToppings();
        
        cout << "adding " << m_dough << " and " << m_sauce << " and " << m_toppings << endl;
        cout << "done\n";
    }
};

class VeggiePizza : public Pizza
{
public:
    VeggiePizza(IngredientFactory* factory) :
        Pizza(factory)
    {
        cout << "Creating a veggie pizza...\n";
    }

    void Prepare()
    {
        m_dough = m_factory->CreateDough();
        m_sauce = m_factory->CreateSauce();
        m_toppings = m_factory->CreateToppings();

        cout << "adding " << m_dough << " and " << m_sauce << " and " << m_toppings << endl;
        cout << "done\n";
    }
};


#endif // !PIZZA_H

