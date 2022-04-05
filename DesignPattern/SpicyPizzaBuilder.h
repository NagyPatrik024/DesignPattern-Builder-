#pragma once

#include "PizzaBuilder.h"

class SpicyPizzaBuilder : public PizzaBuilder
{
public:
	~SpicyPizzaBuilder() override = default;
	virtual void BuildDough() override;
	virtual void BuildSauce() override;
	virtual void BuildTopping() override;
};

