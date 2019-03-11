#include <iostream>

int readNumber()
{
	int num1{};
	std::cout << "Enter a number: \n";
	std::cin >> num1;

	return num1;
}

void writeAnswer(int x)
{

	std::cout << "The sum of the two numbers entered is: " << x << '\n';

}