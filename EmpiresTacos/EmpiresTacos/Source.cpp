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

	const double taxRate = 1.075;

	
	double tacoOrdered, burritoOrdered, cokeOrdered, tacoTotal, burritoTotal, cokeTotal, total, totalWithTax,
		kyloRenOrdered, kyloRenTotal, churroTotal, churroOrdered, hanSoloTotal, hanSoloOrdered, r2D2Total, r2D2Ordered, 
		chewbaccaOrdered, chewbaccaTotal, steakTotal, steakOrdered, chickenTotal, chickenOrdered;
	
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

	std::cout << "How many Tacos would you like?" << std::endl;
	std::cin >> tacoOrdered;

	std::cout << "How many Burritos would you like?" << std::endl;
	std::cin >> burritoOrdered;

	std::cout << "How much coke would you like?" << std::endl;
	std::cin >> cokeOrdered;

	std::cout << "How many Kylo's would you like?" << std::endl;
	std::cin >> kyloRenOrdered;

	std::cout << "How many churros would you like?" << std::endl;
	std::cin >> churroOrdered;

	std::cout << "How many Han solo's would you like?" << std::endl;
	std::cin >> hanSoloOrdered;

	std::cout << "How many R2D2s would you like?" << std::endl;
	std::cin >> r2D2Ordered;

	std::cout << "How many Chewies would you like?" << std::endl;
	std::cin >> chewbaccaOrdered;

	std::cout << "How many steak would you like?" << std::endl;
	std::cin >> steakOrdered;

	std::cout << "How many chicken would you like?" << std::endl;
	std::cin >> chickenOrdered;

	

	tacoTotal = tacoOrdered * tacoPrice;
	burritoTotal = burritoOrdered * burritoPrice;
	cokeTotal = cokeOrdered * cokePrice;
	kyloRenTotal = kyloRenOrdered * kyloRenPrice;
	churroTotal = churroOrdered * churroPrice;
	hanSoloTotal = hanSoloOrdered * hanSoloPrice;
	r2D2Total = r2D2Ordered * r2D2Price;
	chewbaccaTotal = chewbaccaOrdered * chewbaccaPrice;
	steakTotal = steakOrdered * steak;
	chickenTotal = chickenOrdered * chicken;

	total = tacoTotal + burritoTotal + cokeTotal + kyloRenTotal + churroTotal, hanSoloTotal, r2D2Total, chewbaccaTotal, steakTotal, chickenTotal;
	totalWithTax = total * taxRate;
	std::cout << "Your total for all items entered is $" << total << std::endl;
	std::cout << "Your total for all items entered with tax is $" << totalWithTax << std::endl;
	




}