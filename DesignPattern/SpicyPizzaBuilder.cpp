#include "SpicyPizzaBuilder.h"

void SpicyPizzaBuilder::BuildDough()
{
	mPizza->SetDough("spicy");
}

void SpicyPizzaBuilder::BuildSauce()
{
	mPizza->SetSauce("spicy");
}

void SpicyPizzaBuilder::BuildTopping()
{
	mPizza->SetTopping("spicy");
}
