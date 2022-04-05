#pragma once

#include <string>
class Pizza
{
public:
	Pizza() = default;
	void SetDough(const std::string& dough);
	void SetSauce(const std::string& sauce);
	void SetTopping(const std::string& topping);
private:
	std::string mDough;
	std::string mSauce;
	std::string mTopping;
};

