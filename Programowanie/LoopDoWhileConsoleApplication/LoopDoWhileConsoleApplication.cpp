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

int main()
{
	setlocale(LC_CTYPE, "polish");
	task2();
}

