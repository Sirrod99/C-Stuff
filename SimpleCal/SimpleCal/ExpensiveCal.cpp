#include <iostream>
#include <string>

int main()
{
	int aFirst, bSecond, cAdd, dSubstract, eDivide, fMultiply, gRemainder;
	
	std:: string nameString;

	std::cout << "What is your name: ";
	std::cin >> nameString;

	std::cout << "Enter a number: ";
	std::cin >> aFirst;

	std::cout << "enter a second number: ";
	std::cin >> bSecond;

	cAdd = aFirst + bSecond;
	dSubstract = aFirst - bSecond;
	eDivide = aFirst / bSecond;
	fMultiply = aFirst * bSecond;
	gRemainder = aFirst % bSecond;

	//Adding
	std::cout << "The sum of " << aFirst << " + " << bSecond << " = " << cAdd << std::endl;
	//Subtracting
	std::cout << "The sum of " << aFirst << " - " << bSecond << " = " << dSubstract << std::endl;
	//Dividing
	std::cout << "The sum of " << aFirst << " / " << bSecond << " = " << eDivide << std::endl;
	//Multiply
	std::cout << "The sum of " << aFirst << " * " << bSecond << " = " << fMultiply << std::endl;
	//Remainder
	std::cout << "The sum of " << aFirst << " % " << bSecond << " = " << gRemainder << std::endl;
	std::cout << "The End " << nameString << std::endl;



}
