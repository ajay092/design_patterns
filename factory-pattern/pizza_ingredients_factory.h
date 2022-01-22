#ifndef PIZZA_INGREDIENT_FACTORY_H
#define PIZZA_INGREDIENT_FACTORY_H

#include <iostream>
#include <string>

using namespace std;

class IngredientFactory
{
public:
    IngredientFactory() {}
    virtual string CreateDough() = 0;
    virtual string CreateSauce() = 0;
    virtual string CreateToppings() = 0;
};

class NYIngredientFactory : public IngredientFactory
{
public:
    NYIngredientFactory(){}

    string CreateDough() { return "thin dough"; }
    string CreateSauce() { return "marinara sauce"; }
    string CreateToppings() { return "corn"; };
};

class ChicagoIngredientFactory : public IngredientFactory
{
public:
    ChicagoIngredientFactory() {}
    string CreateDough() { return "thick dough"; }
    string CreateSauce() { return "plum sauce"; }
    string CreateToppings() { return "bell pepper"; };
};

#endif // !PIZZA_INGREDIENT_FACTORY_H

