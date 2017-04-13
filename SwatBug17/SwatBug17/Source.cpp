#include <iostream>
#include <iomanip>


int main()
{
	//declare named constant and variables
	const double RATE = .1;
	double sales = 0.0;
	double bonus = 0.0;

	//enter input
	std::cout << "Enter the sales amount: " << std::endl;
	std::cin >> sales;

	//display output
	if (sales < 10000)
	{
		bonus = sales * RATE;
		std::cout << sales << RATE(3);
		std::cout << "Bonus: $" << bonus << std::endl;
	}
	else
		std::cout << "Sorry, you do not get a bonus." << std::endl;
	//end if

	system("pause");
	return 0;
}	//end of main function