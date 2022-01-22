#include "driver.h"

Driver::Driver()
{}

void Driver::RunStrategyPattern()
{
    IFlyBehaviour* no_fly = new NoFly();
    IFlyBehaviour* fly_with_wings = new FlyWithWings();

    Duck* duck = new Duck("Base", no_fly);
    Duck* wood_duck = new WoodDuck("Wood", no_fly);
    Duck* wild_duck = new WildDuck("Wild", fly_with_wings);

    duck->Display();
    duck->PerformFly();

    wood_duck->Display();
    wood_duck->PerformFly();

    wild_duck->Display();
    wild_duck->PerformFly();
    wild_duck->SetFlyBehaviour(no_fly); // perhaps it's injured
    wild_duck->PerformFly();

    delete no_fly, fly_with_wings, duck, wood_duck, wild_duck;
}

void Driver::RunObserverPattern()
{
    Subject* subject = new Subject(10);

    Observer* obs1 = new Observer1(10);
    Observer* obs2 = new Observer2(10);
    Observer* obs3 = new Observer3(10);

    obs1->DisplayData();
    obs2->DisplayData();
    obs3->DisplayData();

    subject->Subscribe(obs1);
    subject->Subscribe(obs2);
    subject->Subscribe(obs3);

    subject->SetData(20);
    obs1->DisplayData();
    obs2->DisplayData();
    obs3->DisplayData();

    subject->UnSubscribe(obs3);
    subject->SetData(1000);

    obs1->DisplayData();
    obs2->DisplayData();
    obs3->DisplayData();

    delete subject, obs1, obs2, obs3;
}

void Driver::RunDecoratorPattern()
{
    cout << "Running decorator pattern...\n";
}

void Driver::RunBuilderPattern()
{
    cout << "Running builder pattern...\n";
}

void Driver::RunFactoryPattern()
{
    cout << "Running factory pattern...\n";

    PizzaStore* ny_store = new NYPizzaStore();
    ny_store->OrderPizza("cheese");
    ny_store->OrderPizza("veggie");
    delete ny_store;

    PizzaStore* chicago_store = new ChicagoPizzaStore();
    chicago_store->OrderPizza("cheese");
    chicago_store->OrderPizza("veggie");
    delete chicago_store;
}