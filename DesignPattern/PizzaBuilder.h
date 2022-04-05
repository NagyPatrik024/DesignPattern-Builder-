#pragma once

#include "Pizza.h"
#include <memory>

class PizzaBuilder
{
public:
	virtual ~PizzaBuilder() = default;
	void CreatePizza();
	virtual void BuildDough() = 0;
	virtual void BuildSauce() = 0;
	virtual void BuildTopping() = 0;
	Pizza GetPizza();
protected:
	std::unique_ptr<Pizza> mPizza;

};

