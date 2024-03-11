#include <iostream>

//Napisz program, kt�ry wy�wietli "Hello World" tyle razy ile chce u�ytkownik
void task1()
{
	int number;
    
	do
	{
		std::cout << "Podaj liczb� dodatni�: \n";
		std::cin >> number;
	} while (number < 0);
    
	for (int i = 0; i != number; i++)
	{
		std::cout << "Hello World\n";
	}
}

//Napisz program wy�wietlaj�cy na ekranie kolejne liczby naturalne od 1 do 10
void task2()
{
	for (int i = 1; i <= 10; i++)
	{
		std::cout << i << "\n";
	}
}

//Namaluj r�wnoleg�obok z "X". Wysoko�� i szeoko�� wczytaj z klawiatury.
void task3()
{
	int width, height;

	do
	{
		std::cout << "Podaj szeroko��: \n";
		std::cin >> width;
	} while (width < 0);

	do
	{
		std::cout << "Podaj wysoko��: \n";
		std::cin >> height;
	} while (height < 0);

	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			std::cout << "X";
		}
		std::cout << "\n";
	}
}

//Program obliczaj�cy sum� liczb od 1 do 100
void task4()
{
	int sum = 0, number;

	for (int i = 1; i <= 100; i++)
	{
		sum += i;
	}
	
	std::cout << "Suma liczb od 1 do 100 wynosi: " << sum;
}

/*
Program sprawdzaj�cy czy podana liczba jest liczb� doskona��(czyli tak�, kt�rej suma dzielnik�w(z wy��czeniem samej siebie) jest r�wna danej
liczbie, np. 6 jest liczb� doskona��, poniewa� 1 + 2 + 3 = 6).
*/
void task5()
{
	int sumOfDivisors = 0, number;

	do
	{
		std::cout << "Podaj liczb�: \n";
		std::cin >> number;
	} while (number < 0);

	for (int i = 0; i < number; i++)
	{
		if ()
	}
}

/*
* 
* 
* Program wy�wietlaj�cy na ekranie kwadraty liczb od 1 do 10 (np. 1, 4, 9, 16 itd.)
* Program obliczaj�cy n!.
* Program wy�wietlaj�cy na ekranie silnie z liczb od 1 do 10 (np. 1!, 2!, 3!, 4! itd.)
* Program wy�wietlaj�cy na ekranie tabliczk� mno�enia od 1 do 9 (np. 1x1=1, 1x2=2, 1x3=3 itd.).
* Program wy�wietlaj�cy na ekranie wszystkie liczby podzielne przez 3 z zakresu od 1 do 100
* Program obliczaj�cy sum� kwadrat�w liczb od 1 do 10
* Program, kt�ry wczyta podstaw� oraz wyk�adnik oraz wyliczy wynik.
* Program wy�wietlaj�cy na ekranie ci�g Fibonacciego do 20 elementu (ci�g Fibonacciego to ci�g gdzie ka�dy element jest sum� dw�ch poprzednich, np. 0, 1, 1, 2, 3, 5, 8, 13 itd.)
*/

int main()
{
    setlocale(LC_CTYPE, "polish");
    task4();
}

