#pragma once

#include "PizzaBuilder.h"

class HawaiiPizzaBuilder : public PizzaBuilder
{
public:
	~HawaiiPizzaBuilder() override = default;
	virtual void BuildDough() override;
	virtual void BuildSauce() override;
	virtual void BuildTopping() override;
};

