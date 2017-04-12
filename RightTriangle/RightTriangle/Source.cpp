#include <iostream>
#include <string>


int aside()
{
	double answerA, userEntryB, userEntryC;
	std::cout << "Enter a number for for side C" << std::endl;
	std::cin >> userEntryC;
	std::cout << "Enter a number for for side B" << std::endl;
	std::cin >> userEntryB;
	answerA = sqrt((userEntryC * userEntryC) + (userEntryB * userEntryB));
	std::cout << answerA << std::endl;
}

int bside()
{
	double userEntryA, answerB, userEntryC;
	std::cout << "Enter a number for for side A" << std::endl;
	std::cin >> userEntryA;
	std::cout << "Enter a number for for side C" << std::endl;
	std::cin >> userEntryC;
	answerB = sqrt((userEntryA * userEntryA) + (userEntryC * userEntryC));
	std::cout << answerB << std::endl;
}

int cside()
{
	double userEntryA, userEntryB, answerC;
	std::cout << "Enter a number for for side A" << std::endl;
	std::cin >> userEntryA;
	std::cout << "Enter a number for for side B" << std::endl;
	std::cin >> userEntryB;
	answerC = sqrt((userEntryA * userEntryA) + (userEntryB * userEntryB));
	std::cout << answerC << std::endl;
}

int main()
{

	int response;
	int A;
	int B;
	int C;


	std::cout << "Welcome to the spectaular, triangle solving simulator!" << std::endl;
	std::cout << "Which side of the triangle would you like to solve my boy? A, B, or C" << std::endl;
	std::cin >> response;

	if (response == A)
	
	{
		int aside();
	}

	if (response == B)
	
	{
		int bside();
	}

	if (response == C)
	
	{
		int cside();
	}

	
	//Methods
	














}