#include <iostream>
#include "HawaiiPizzaBuilder.h"
#include "Bake.h"

int main()
{
	HawaiiPizzaBuilder hawaiiPizzaBuilder;
	Bake hawaiianPizzaBaker(hawaiiPizzaBuilder);
	hawaiianPizzaBaker.Info();

}
