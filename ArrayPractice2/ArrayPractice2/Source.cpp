#include <iostream>
#include <iomanip>


int main()
{
	double sales[4] = { 0.0 };

	//store data in the array
	for (int sub = 0; sub < 4; sub++)
	{
		std::cout << "Enter the sales for region";
		std::cout << sub + 1 << ": ";
		std::cin >> sales[sub];
		//end for loop
	}

	//display the content of the arry 
	std::cout << std::fixed << std::setprecision(2) << "\n\n";

	for (int sub = 0; sub < 4; sub + 1)
	{
		std::cout << "Sales for region " << sub + 1 << ": $";
		std::cout << sales[sub] << std::endl;
	}
	double result = 0;
	for (int n = 0; n < 4; n++)
	{
		result = sales[n] + result;
	}
	std::cout << "Total sales of the region totals: $" << result << std::endl;


	system("pause");
	return 0;
}