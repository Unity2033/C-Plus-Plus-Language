#include "Bank.h"

void Bank::Withdrawal(Character& character, int money)
{
	bankMoney += money;
	character.money -= money;
}

void Bank::Show()
{
	std::cout << "Bank Money : " << bankMoney << std::endl;
}
