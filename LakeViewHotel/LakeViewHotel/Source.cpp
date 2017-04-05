#include <iostream>
#include <string>

int main()
{
	int costPerNight = 125;
	int serviceCharge = 45;
	int phoneBill = .95;
	double amountStaying;
	double nightsStaying;
	double totalCost;

	std::cout << "Welcome to Hotel Grandeur my boi, what's in yo pocket doe. \nI am not from this country." << std::endl;

	std::cout << "How many people do you bring my boi? " << std::endl;
	std::cin >> amountStaying;

	std::cout << "How many nights will you be staying in me my boi?" << std::endl;
	std::cin >> nightsStaying;

	std::cout << "How much phone do buddies use?" << std::endl;
	std::cin >> phoneBill;

	totalCost = amountStaying * costPerNight * nightsStaying + serviceCharge + phoneBill;

	std::cout << "\n" << amountStaying << " poor saps stayed " << nightsStaying << " nights at my house, with a $" << serviceCharge << 
		" \nservice charge, because I don't like you, and owe me $" << phoneBill << 
		"\nFor telephone, tell your buddies to hold off." << std::endl;

	std::cout << "Now to leave, and you own me $" << totalCost << " Now get out, and never return!" << std::endl;


}
