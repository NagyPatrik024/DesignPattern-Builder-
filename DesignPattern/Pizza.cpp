#include "Pizza.h"
#include <iostream>

void Pizza::SetDough(const std::string& dough)
{
	mDough = dough;
}

void Pizza::SetSauce(const std::string& sauce)
{
	mSauce = sauce;
}

void Pizza::SetTopping(const std::string& topping)
{
	mTopping = topping;
}

void Pizza::Info() const
{
	std::cout << "The pizza has " << mDough << " dough, " << mSauce << " sauce, " << mTopping << " topping." << std::endl;
}
