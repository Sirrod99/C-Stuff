#include <iostream>
#include <iomanip>
int addition[] = { 1, 2, 3, 4, 5 };
int addition2[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
int n, result = 0;




int main()
{
	int x[] = { 1 };
	int y[] = { 2 };
	int z[] = { 3 };
	std::cout << x[0] << std::endl;
	std::cout << y[0] << std::endl;
	std::cout << z[0] << std::endl;
	
	for (n = 0; n < 5; ++n)
	{
		result = addition[n] + result;
	}
	std::cout << result << std::endl;

	

	int x1[] = { 1, 2, 3 };
	std::cout << x[10] << x1[1] << x1[2] << std::endl;
	system("pause");

	return 0;

}
