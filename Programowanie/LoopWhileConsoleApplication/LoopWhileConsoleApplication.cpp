#include <iostream>

//Napisz program, kt�ry policzy sum� cyfr podanej przez u�ytkownika liczby.
void task1()
{
	
	int number, numberOfDigit = 1;
	
	do
	{
		std::cout << "Podaj liczb� dodatni�: \n";
		std::cin >> number;
	} while (number < 0);
	/*
	if (number > 9)
	{
		number = number / 10;
		numberOfDigit++;
		if (number > 9)
		{
			number = number / 10;
			numberOfDigit++;
			if (number > 9)
			{
				//...
			}
		}
	}
	*/

	while (number > 9)
	{
		number = number / 10;
		numberOfDigit++;
	}

	std::cout << "Ilo�� cyfr w liczbie wynosi: " << numberOfDigit;
}

//Napisz program, kt�ry policzy NWD dw�ch liczb.
void task2()
{
	/*
	 Wz�r na NWD = { a , b = 0												}
				   { NWD(b, a % b), b != 0 (skre�lony znak r�wno�ci, nie !=)}
	*/


}

int main()
{
	setlocale(LC_CTYPE, "polish");
	task2();
}

