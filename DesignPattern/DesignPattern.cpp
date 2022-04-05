#include <iostream>
#include "HawaiiPizzaBuilder.h"
#include "SpicyPizzaBuilder.h"
#include "Bake.h"

int main()
{
	HawaiiPizzaBuilder hawaiiPizzaBuilder;
	Bake hawaiianPizzaBaker(hawaiiPizzaBuilder);
	hawaiianPizzaBaker.Info();

	SpicyPizzaBuilder spicyPizzaBuilder;
	Bake spicyPizzaBaker(spicyPizzaBuilder);
	spicyPizzaBaker.Info();

}
