//Delgados Tacos
//Zach Dorris
//March 30, 2017
#include <iostream>
#include <string>

int main()
{
	double tacoPrice = 1.99;
	double burritoPrice = 3.99;
	double cokePrice = .49;
	double kyloRenPrice = 99999.95;
	double churroPrice = 5.99;
	double hanSoloPrice = 12000.45;
	double r2D2Price = 749.99;
	double chewbaccaPrice = 14999.95;
	double steak = 99.90;
	double chicken = 44.99;
	int orderNumber;

	const double taxRate = 1.075;


	double tacoOrdered, burritoOrdered, cokeOrdered, total,
		kyloRenOrdered, churroOrdered, hanSoloTotal, hanSoloOrdered,  r2D2Ordered,
		chewbaccaOrdered, steakOrdered, chickenOrdered;

	std::cout << "****************************************************************" << std::endl;
	std::cout << "**                                                            **" << std::endl;
	std::cout << "*                                                              *" << std::endl;
	std::cout << "*                                                              *" << std::endl;
	std::cout << "*                                                              *" << std::endl;
	std::cout << "*                   The Empire Is Back Baby!                   *" << std::endl;
	std::cout << "*                                                              *" << std::endl;
	std::cout << "*                         No Refunds!                          **************" << std::endl;
	std::cout << "*                                                              *            *" << std::endl;
	std::cout << "*                                                              *             *" << std::endl;
	std::cout << "*                                                              *              *" << std::endl;
	std::cout << "*                                                              *               *" << std::endl;
	std::cout << "*                                                              *               *" << std::endl;
	std::cout << "*                                                              *             *" << std::endl;
	std::cout << "*                                                              *             *" << std::endl;
	std::cout << "*                                                              ***************" << std::endl;
	std::cout << "***00000000*******************************************00000000***" << std::endl;
	std::cout << "   oooooooo                                           oooooooo   " << std::endl;
	std::cout << "   oooooooo                                           oooooooo   " << std::endl;
	std::cout << "   oooooooo                                           oooooooo   " << std::endl;
	std::cout << "   oooooooo                                           oooooooo   " << std::endl;
	std::cout << "   oooooooo                                           oooooooo   " << std::endl;
	std::cout << "   oooooooo                                           oooooooo   " << std::endl;
	std::cout << "   oooooooo                                           oooooooo   " << std::endl;
	std::cout << "   oooooooo                                           oooooooo   " << std::endl;
	std::cout << "   oooooooo                                           oooooooo   " << std::endl;
	std::cout << "   oooooooo                                           oooooooo   " << std::endl;
	std::cout << "   oooooooo                                           oooooooo   " << std::endl;
	std::cout << "   oooooooo                                           oooooooo   " << std::endl;
	std::cout << "   oooooooo                                           oooooooo   " << std::endl;
	std::cout << "   oooooooo                                           oooooooo   " << std::endl;
	std::cout << "   oooooooo                                           oooooooo   " << std::endl;
	std::cout << " 00oooooooo00                                       00oooooooo00   " << std::endl;
	std::cout << " 00oooooooo00                                       00oooooooo00   " << std::endl;
	std::cout << "000oooooooo000                                     000oooooooo000   " << std::endl;


	std::cout << "Welcome to The Empire's Tacos, come to the dark side!" << std::endl;


	std::cout << "***************************************************" << std::endl;
	std::cout << "                        MENU                       " << std::endl;
	std::cout << "                             Order #     Price     " << std::endl;
	std::cout << "        Taco                    1        1.99      " << std::endl;
	std::cout << "      Burritos                  2        3.99      " << std::endl;
	std::cout << "        Coke                    3         .49      " << std::endl;
	std::cout << "        Kylo                    4    99999.95      " << std::endl;
	std::cout << "       Churros                  5        5.99      " << std::endl;
	std::cout << "       Han Solo                 6    12000.45      " << std::endl;
	std::cout << "         R2D2                   7       749.99     " << std::endl;
	std::cout << "       Chewies                  8     14999.95     " << std::endl;
	std::cout << "        Steak                   9        99.90     " << std::endl;
	std::cout << "       Chicken                  10       44.99     " << std::endl;
	std::cout << "***************************************************" << std::endl;
	
	std::cout << "Welcome to The Empire's Tacos, come to the dark side! What do you want to order" << std::endl;
	std::cin >> orderNumber;

	if (orderNumber == 1)
	{
		std::cout << "You want tacos, huh? How many would you like?";
		std::cin >> tacoOrdered;
		total = (tacoPrice * tacoOrdered);
		std::cout << "You ordered" << tacoOrdered << " Tacos, your total is " << total << std::endl;
	}

	if (orderNumber == 2)
	{
		std::cout << "You want burritos, huh? How many would you like?";
		std::cin >> burritoOrdered;
		total = (burritoPrice * burritoOrdered);
		std::cout << "You ordered" << burritoOrdered << " Burritos, your total is " << total << std::endl;
	}

	if (orderNumber == 3)
	{
		std::cout << "You want coke, huh? How much would you like?";
		std::cin >> cokeOrdered;
		total = (cokePrice * cokeOrdered);
		std::cout << "You ordered" << cokeOrdered << " cokes, your total is " << total << std::endl;
	}

	if (orderNumber == 4)
	{
		std::cout << "You want Kylo's, huh? How many would you like?";
		std::cin >> kyloRenOrdered;
		total = (kyloRenPrice * kyloRenOrdered);
		std::cout << "You ordered" << kyloRenOrdered << " Kylo Ren's, your total is " << total << std::endl;
	}

	if (orderNumber == 5)
	{
		std::cout << "You want churros, huh? How many would you like?";
		std::cin >> churroOrdered;
		total = (churroPrice * churroOrdered);
		std::cout << "You ordered" << churroOrdered << " Churros, your total is " << total << std::endl;
	}

	if (orderNumber == 6)
	{
		std::cout << "You want Han Solo's, huh? How many would you like?";
		std::cin >> hanSoloOrdered;
		total = (hanSoloPrice * hanSoloOrdered);
		std::cout << "You ordered" << hanSoloOrdered << " Han Solo's, your total is " << total << std::endl;
	}

	if (orderNumber == 7)
	{
		std::cout << "You want R2D2, huh? How many would you like?";
		std::cin >> r2D2Ordered;
		total = (r2D2Price * r2D2Ordered);
		std::cout << "You ordered" << r2D2Ordered << " R2D2's, your total is " << total << std::endl;
	}

	if (orderNumber == 8)
	{
		std::cout << "You want Chewie, huh? How many would you like?";
		std::cin >> chewbaccaOrdered;
		total = (chewbaccaPrice * chewbaccaOrdered);
		std::cout << "You ordered" << chewbaccaOrdered << " Chewie's, your total is " << total << std::endl;
	}

	if (orderNumber == 9)
	{
		std::cout << "You want steaks, huh? How many would you like?";
		std::cin >> steakOrdered;
		total = (steak * steakOrdered);
		std::cout << "You ordered" << steakOrdered << " Steaks, your total is " << total << std::endl;
	}

	if (orderNumber == 10)
	{
		std::cout << "You want chickenz, huh? How many would you like?";
		std::cin >> chickenOrdered;
		total = (chicken * chickenOrdered);
		std::cout << "You ordered" << chickenOrdered << " Chickens, your total is " << total << std::endl;
	}

	 else if(orderNumber < 1)
	{
		std::cout << "*Darth Vader kills you with his force choke*";
	}


	

	std::cout << "Your total for all items entered is $" << total << std::endl;
	





}