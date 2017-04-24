#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cctype>


int main()
{
	srand(static_cast<unsigned int>(time(0)));
	int randomNumber = rand();
	int die = (randomNumber % 100) + 1; //get a number between 1 and 100
	int number;
	int chances = 0;
	int difficulty;
	do{
		chances++;
		std::cout << "Pick a number between 1 and 100" << std::endl;
		std::cin >> number;
		if (number == die)
		{
			std::cout << "Congratulations the number " << die << " is correct" << std::endl;
		}
		else if (number > die)
		{
			std::cout << "You chose too high" << std::endl;
		}
		else
		{
			std::cout << "You chose too low" << std::endl;
		}
		std::cout << "You have used " << chances << " of 7 chances" << std::endl;
		
	} while (chances != 7 || number == die);


	system("pause");
	return 0;

}
