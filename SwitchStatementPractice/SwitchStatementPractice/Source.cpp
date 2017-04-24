#include <iostream>

int main()
{
	char grade = ' ';
	//enter grade
	std::cout << "Enter a letter grade";
	std::cin >> grade;
	grade = toupper(grade);

	switch (grade)
	{
	case 'A':
		std::cout << " Excellent ";
		break;
	case 'B':
		std::cout << " Above average ";
		break;
	case 'C':
		std::cout << " Average ";
		break;
	//Complete

	case 'D':
	case 'F':
		std::cout << " Below Average ";
		break;
	default:
		std::cout << " Invalid grade\n";
	//end switch

	
	}
	system("pause");
	return 0;

}