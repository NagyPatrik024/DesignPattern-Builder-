#pragma once

#include "PizzaBuilder.h"

class Bake
{
public:
	Bake(PizzaBuilder& pizzaBuilder);
	void Info() const;
private:
	PizzaBuilder& mPizzaBuilder;
};

