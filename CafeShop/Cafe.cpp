
#include "Cafe.hpp"
#include <string>
#include <iostream>
#include <sstream>

Register::Register()
{
}


Register::~Register()
{
}

void Register::Welcome()
{
	std::cout << "Welcome to the Cafe" << std::endl;
	Order();
}

void Register::Order()
{
	std::cout << "What would you like to add to your order?" << std::endl;
	std::cout << "[1] Coffee | $2.15 " << std::endl;
	std::cout << "[2] Tea | $2.75 " << std::endl;
	std::cout << "[3] Sandwich | $3.50 " << std::endl;
	std::cout << "[4] Burger | $5.25 " << std::endl;
	std::cout << "[5] Nothing " << std::endl;

	std::cin >> option;

	switch (option)
	{
		case 1:
			coffeeAmount = coffeeAmount + 1;
			std::cout << "Your order:" << std::endl;
			std::cout << coffeeAmount << " Coffee " << teaAmount << " Tea " << sandwhichAmount << " Sandwich " << burgerAmount << " Burger " << std::endl;
			Order();
			break;
		case 2:
			teaAmount = teaAmount + 1;
			std::cout << "Your order:" << std::endl;
			std::cout << coffeeAmount << " Coffee " << teaAmount << " Tea " << sandwhichAmount << " Sandwich " << burgerAmount << " Burger " << std::endl;
			Order();
			break;
		case 3: 
			sandwhichAmount = sandwhichAmount + 1;
			std::cout << "Your order:" << std::endl;
			std::cout << coffeeAmount << " Coffee " << teaAmount << " Tea " << sandwhichAmount << " Sandwich " << burgerAmount << " Burger " << std::endl;
			Order();
			break;
		case 4:
			burgerAmount = burgerAmount + 1;
			std::cout << "Your order:" << std::endl;
			std::cout << coffeeAmount << " Coffee " << teaAmount << " Tea " << sandwhichAmount << " Sandwich " << burgerAmount << " Burger " << std::endl;
			Order();
			break;
		case 5:
			std::cout << "Your order:" << std::endl;
			std::cout << coffeeAmount << " Coffee " << teaAmount << " Tea " << sandwhichAmount << " Sandwich " << burgerAmount << " Burger " << std::endl;
			Calculate();
			break;
	}
}

void Register::Calculate()
{
	coffeeTotal = coffeeAmount * 2.15;
	teaTotal = teaAmount * 2.55;
	sandwhichTotal = sandwhichAmount * 3.75;
	burgerTotal = burgerAmount * 3.22;

	overallTotal = coffeeTotal + teaTotal + sandwhichTotal + burgerTotal;

	std::cout << "$" << overallTotal << " is your total" << std::endl;
	//Pay();
}
