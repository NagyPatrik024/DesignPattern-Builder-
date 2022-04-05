#include "Bake.h"

Bake::Bake(PizzaBuilder& pizzaBuilder) : mPizzaBuilder(pizzaBuilder)
{
	mPizzaBuilder.CreatePizza();
	mPizzaBuilder.BuildDough();
	mPizzaBuilder.BuildSauce();
	mPizzaBuilder.BuildTopping();
}

void Bake::Info() const
{
	mPizzaBuilder.GetPizza().Info();
}
