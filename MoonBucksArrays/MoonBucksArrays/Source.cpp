#include <iostream>
using namespace std;

//function prototype
double getTotal(double poundsUsed[], int numElements);

int main()
{
	//declare arry
	double pounds[12] = { 400.5, 450.0, 475.5, 336.5, 457.0, 325.0, 220.5,
		276.0, 300.0, 320.5, 400.5, 415.0 };
	//variables
	double total = 0.0;
	double average = 0.0;

	//calulate total and average used
	total = getTotal(pounds, 12);
	average = total / 12;

	cout << "Total pounds: " << total << endl;
	cout << "Average pounds:" << average << endl;

	//system("pause");
	return 0;
}
	//Function defs
	double getTotal(double poundsUse[], int numElements)
	{
		double totalUsed = 0.0;

		for (int sub = 0; sub < numElements; sub += 1)
			totalUsed += poundsUse[sub];

			return totalUsed;


	}

