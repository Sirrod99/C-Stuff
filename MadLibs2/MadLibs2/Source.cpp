#include <iostream>
#include <string>

int main()
{
	int survivors, years;
	std::string personMan, color, est, bodyPart, animal, noun, pluralNoun;

    //Intro

	std::cout << "Welcome to The First Encounter" << std::endl;
	std::cout << "Please enter the following for you personalized story" << std::endl;
	
	std::cout << " Pick a color, any color! " << std::endl;
	std::cin >> color;

	std::cout << "Enter a word ending in Est! " << std::endl;
	std::cin >> est;

	std::cout << "Enter a body part!" << std::endl;
	std::cin >> bodyPart;

	std::cout << "Enter your favorite animal! " << std::endl;
	std::cin >> animal;

	std::cout << "Enter a noun, now!" << std::endl;
	std::cin >> noun;

	std::cout << "Enter a plural noun my boi" << std::endl;
	std::cin >> pluralNoun;

	

	//Story

	std::cout << "On a beautiful morning in July, the sky was a bright "<< color << std::endl;
	std::cout << "Your best friend drive up to your house telling you that you are the " << est << " person he has ever met " << std::endl;
	std::cout << "He tells you to get into his " << color << " car" << std::endl;
	std::cout << "You get into the car and you a severed " << bodyPart << ". You scream and yell out for help, but all that shows up is a " << animal << std::endl;
	std::cout << "You look at your friend calling him a " << noun << std::endl;
	std::cout << "You look out the window and see a large ship in the sky, a being comes out looking like his made of millions of " << pluralNoun << std::endl;


}
