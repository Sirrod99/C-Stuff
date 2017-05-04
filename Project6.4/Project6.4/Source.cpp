#include <iostream>
using namespace std;

//function prototype
double getTotal(double numsUsed[], int numElements);

int main()
{
	//declare arry
	double numbers[6] = { 23, 6, 47, 35, 2, 14 };
	//variables
	double total = 0.0;
	double average = 0.0;

	//calculate total and average 
	total = getTotal(numbers, 6);
	average = total / 6;

	cout << "Total: " << total << endl;
	cout << "Average:" << average << endl;

	//system("pause");
	return 0;
}
//Function defs
double getTotal(double numsUse[], int numElements)
{
	double totalUsed = 0.0;

	for (int sub = 0; sub < numElements; sub += 1)
		totalUsed += numsUse[sub];

	return totalUsed;


}


