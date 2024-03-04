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
/*
	 Wz�r na NWD = { a , b = 0												}
				   { NWD(b, a % b), b != 0 (skre�lony znak r�wno�ci, nie !=)}
*/
void task2()
{
	int firstNumber, secondNumber;

	do
	{
		std::cout << "Podaj pierwsz� liczb� dodatni�: \n";
		std::cin >> firstNumber;
	} while (firstNumber < 0);

	do
	{
		std::cout << "Podaj drug� liczb� dodatni�: \n";
		std::cin >> secondNumber;
	} while (secondNumber < 0);

	if (secondNumber != 0)
	{
		int tmpfirstNumber = firstNumber;
		firstNumber = secondNumber;
		secondNumber = tmpfirstNumber % secondNumber;
		if (secondNumber != 0)
		{
			//...
		}
	}

	std::cout << "NWD = " << firstNumber;
}

int main()
{
	setlocale(LC_CTYPE, "polish");
	task2();
}

