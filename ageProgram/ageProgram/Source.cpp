#include <iostream>

int main()
{
	int age;

	std::cout << "Enter you age";
	std::cin >> age;

	if (age <= 11)
		std::cout << "You are a little little boy huh?" << std::endl;
	else if (age <=12 && age <18)
		std::cout << "You a much bigger little boy!" << std::endl;
	else if (age >= 19 && age <= 30)
		std::cout << "You are big man child my boi!" << std::endl;
	else if (age > 30 && age <45 )
		std::cout << "You are a big kid now my boi! Go explore the world!" << std::endl;
	else if (age >= 45 && age <= 55)
		std::cout << "Why you still here? Get out! You too big for this home!" << std::endl;
	else if (age >= 55 && age <= 65)
		std::cout << "Why you not dead yet!" << std::endl;
	else if (age >= 65 && age <= 75)
		std::cout << "Die already my boi! You look like a *long beeps*" << std::endl;
	system("pause");
	return 0;
}