#include <iostream>
#include <string>


int main()
{
	
	double dozenEggsCost = 1.98;
	double remainEggCost = .21;
	int dozenEggs = 12;
	int remainderEggs;
	int numDozenEggs;
	int totalEggsOrdered;
	double totalCost;
	
	
	std::cout << "Welcome to the Happy-Fun-Time Egg Place!" << std::endl;
	std::cout << "How many eggs would you like my boy?" << std::endl;
	std::cin >> totalEggsOrdered;
	numDozenEggs = totalEggsOrdered / dozenEggs;
	remainderEggs = totalEggsOrdered % dozenEggs;
	totalCost = numDozenEggs * dozenEggsCost + remainderEggs * remainEggCost;

	std::cout << "You ordered " << totalEggsOrdered << " eggs." << std::endl;
	std::cout << "Your total cost is " << totalCost << std::endl;
}