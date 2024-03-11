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


int main()
{
    setlocale(LC_CTYPE, "polish");
    task3();
}

