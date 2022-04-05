#include "HawaiiPizzaBuilder.h"

void HawaiiPizzaBuilder::BuildDough()
{
	mPizza->SetDough("hawaiian");
}

void HawaiiPizzaBuilder::BuildSauce()
{
	mPizza->SetSauce("hawaiian");
}

void HawaiiPizzaBuilder::BuildTopping()
{
	mPizza->SetTopping("hawaiian");
}
