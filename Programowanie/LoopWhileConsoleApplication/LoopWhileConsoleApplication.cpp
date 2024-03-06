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

	/*if (secondNumber != 0)
	{
		int tmpfirstNumber = firstNumber;
		firstNumber = secondNumber;
		secondNumber = tmpfirstNumber % secondNumber;
		if (secondNumber != 0)
		{
			//...
		}
	}
	*/

	while (secondNumber != 0)
	{
		int tmpfirstNumber = firstNumber;
		firstNumber = secondNumber;
		secondNumber = tmpfirstNumber % secondNumber;
	}

	std::cout << "NWD = " << firstNumber;
}

/*
Miasto T. ma obecnie 100 tys. mieszka�c�w, ale jego populacja ro�nie co roku o 3% rocznie.
Miasto B. ma 300 tys. mieszka�c�w i ta liczba ro�nie w tempie 2% na rok.
 Wykonaj symulacj� prezentuj�c� liczb� mieszka�c�w w obu miastach i zatrzymuj�c� si�,
 gdy liczba mieszka�c�w miasta T. przekroczy liczb� z miasta B.
*/

//W tej p�tli s� 2 zmienne streuj�ce, zale�y co jest w warunku
void task3()
{
	double tCityPopulation = 100000, bCityPopulation = 300000;
	int years = 0;

	while (tCityPopulation < bCityPopulation)
	{
		tCityPopulation = tCityPopulation * 1.03;
		bCityPopulation = bCityPopulation * 1.02;
		years++;
	}

	std::cout << "Populacja miasta T wynios�a " << tCityPopulation << " po " << years << " latach\n";
	std::cout << "Populacja miasta B wynios�a " << bCityPopulation << " po " << years << " latach";
}

int main()
{
	setlocale(LC_CTYPE, "polish");
	task3();
}

