#include <iostream>

//Napisz program kt�ry, wczyta od u�ytkownika liczb� dodatni�
void task1()
{
/*  int number;
	std::cout << "Podaj liczb�\n";
	std::cin >> number;

	if (number < 0)
	{
		std::cout << "Podaj liczb� dodatni�\n";
		std::cin >> number;
		if (number < 0)
		{
			std::cout << "Podaj liczb� dodatni�\n";
			std::cin >> number;
			if (number < 0)
			{
				std::cout << "Podaj liczb� dodatni�\n";
				std::cin >> number;
				if (number < 0)
				{
					//...
					//b��dny algorytm
				}
			}
		}
	}
	std::cout << "Podano liczb� " << number << "\n";
*/

	int number;
	do
	{
		std::cout << "Podaj liczb�\n";
		std::cin >> number;
	} while (number < 0);
	std::cout << "Podano liczb� " << number << "\n";
}

int main()
{
	setlocale(LC_CTYPE, "polish");
	task1();
}

