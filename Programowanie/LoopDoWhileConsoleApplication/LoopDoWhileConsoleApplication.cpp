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

//Napisz program, kt�ry wylosuje liczb�, a nast�pnie u�ytkownik b�dzie musia� j� odgadn��
void task2()
{
	int randomNumber, numberFromUser, userAttempt;

	userAttempt = 0;
	srand(time(0));
	randomNumber = rand() % 101;

	std::cout << "Wylosowano liczb� z zakresu od 0 do 100 odgadnij j�.\n";
	
	do
	{
		std::cout << "Podaj liczb�: \n";
		std::cin >> numberFromUser;
		userAttempt++;

		if (numberFromUser < randomNumber)
			std::cout << "Liczba jest za ma�a\n";
		else if (numberFromUser > randomNumber)
			std::cout << "Liczba jest za du�a\n";
		else
			std::cout << "Zgad�e� " << "po " << userAttempt << " pr�b(ie)ach.\n" << "Wylosowan� liczb� jest: " << randomNumber << "\n";
	} while (numberFromUser != randomNumber);
}

//Napisz program wy�wietlaj�cy liczby ca�kowite z przedia�u <0; x>, x podaje u�ytkownik;
void task3()
{
	/*
	1.Nieprawid�owo
	int upperRange;
	
	std::cout << "Podaj g�rny zakres: ";
	std::cin >> upperRange;

	std::cout << "0, ";
	if (upperRange >= 1)
	{
		std::cout << "1, ";
		if (upperRange >= 2)
		{
			std::cout << "2, ";
			if (upperRange >= 3)
			{
				std::cout << "3, ";
				//......
			}
		}
	}
	*/

	//Prawid�owo
	int upperRange;

	std::cout << "Podaj g�rny zakres: ";
	std::cin >> upperRange;

	int number = 0;
	do
	{
		std::cout << number << ", ";
		number++;
	}while (upperRange >= number);
}


int main()
{
	setlocale(LC_CTYPE, "polish");
	task3();
}