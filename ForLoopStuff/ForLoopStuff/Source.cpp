#include <iostream>



int main()
{
	std::cout << "Counting forward:\n";
	for (int i = 0; i < 10; i++)
	{
		std::cout << i << " ";
	}
	std::cout << " \n\n";
	std::cout << "Counting backwards:\n";
	for (int i = 50; i >= 0; i--)
	{
		std::cout << i << " ";
	}
	std::cout << " \n\n";
	std::cout << "Counting by fives:\n";
	for (int i = 0; i < 100; i= i +5)
	{
		std::cout << i << " ";
	}
	std::cout << " \n\n";
	std::cout << "Counting with nested for Loops:\n";
	int row = 10;
	int column = 5;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
		std::cout << i << "." << j << " ";
		}
		std::cout << std::endl;
	}
	system("pause");
	return 0;
}