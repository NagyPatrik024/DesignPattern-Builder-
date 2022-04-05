#include "PizzaBuilder.h"

void PizzaBuilder::CreatePizza()
{
	mPizza = std::make_unique<Pizza>();
}

Pizza PizzaBuilder::GetPizza()
{
	return *mPizza;
}
