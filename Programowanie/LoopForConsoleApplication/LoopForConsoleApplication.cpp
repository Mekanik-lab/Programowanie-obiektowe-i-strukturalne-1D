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
	int sum = 0;

	for (int i = 1; i <= 100; i++)
	{
		sum += i;
	}
	
	std::cout << "Suma liczb od 1 do 100 wynosi: " << sum;
}

// Program wy�wietlaj�cy na ekranie kwadraty liczb od 1 do 10 (np. 1, 4, 9, 16 itd.)
void task5()
{
	for (int i = 1; i <= 10; i++)
	{
		std::cout << i * i << ", ";
	}
}

//Program obliczaj�cy n!.
void task6()
{
	int number, silnia = 1;

	do
	{
		std::cout << "Podaj liczb� dodatni�: ";
		std::cin >> number;
	} while (number < 0);

	for (int i = number; i > 1; i--)
	{
		silnia *= i;
	}

	std::cout << "Silnia z liczby " << number << " wynosi: " << silnia;
}

//Program obliczaj�cy sum� kwadrat�w liczb od 1 do 10
void task7()
{
	int sum = 0;

	for (int i = 1; i <= 10; i++)
	{
		sum += i * i;
	}
	std::cout << "Suma kwadrat�w liczb od 1 do 10 wynosi: " << sum;
}

//Program, kt�ry wczyta podstaw� oraz wyk�adnik oraz wyliczy wynik.
void task8()
{
	int result = 1, base, exponent;

	std::cout << "Podaj podstaw�: ";
	std::cin >> base;
	std::cout << "Podaj wyk�adnik: ";
	std::cin >> exponent;

	for (int i = 0; i < exponent; i++)
	{
		result *= base;
	}
	std::cout << "Wynik wynosi :" << result;
}

//Program wy�wietlaj�cy na ekranie wszystkie liczby podzielne przez 3 z zakresu od 1 do 100
void task9()
{
	for (int i = 0; i <= 100; i++)
	{
		if (i % 3 == 0)
			std::cout << i << ", ";
	}
}

//Program wy�wietlaj�cy na ekranie tabliczk� mno�enia od 1 do 9 (np. 1x1=1, 1x2=2, 1x3=3 itd.).
void task10()
{
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			std::cout << i << "x" << j << "=" << i * j << "\n";
		}
	}
}

//Program wy�wietlaj�cy na ekranie silnie z liczb od 1 do 10 (np. 1!, 2!, 3!, 4!itd.)
void task11()
{
	for (int i = 1; i <= 10; i++)
	{
		int silnia = 1;
		for (int j = 1; j <= i; j++)
		{
			silnia *= j;
		}
		std::cout << "Silnia z " << i << " to " << silnia << "\n";
	}
}

//Program sprawdzaj�cy czy podana liczba jest liczb� doskona��(czyli tak�, kt�rej suma dzielnik�w(z wy��czeniem samej siebie) jest r�wna danej
//liczbie, np. 6 jest liczb� doskona��, poniewa� 1 + 2 + 3 = 6).
void task12()
{
	int number, counter = 0, i;

	std::cout << "Podaj liczb�: ";
	std::cin >> number;

	for (i = 1; i < number; i++)
	{
		if (number % i == 0)
		{
			counter += i;
		}	
	}
	
	if (counter == number)
		std::cout << "Liczba kt�r� poda�e� jest liczb� doskona��.";
	else
		std::cout << "Liczba kt�r� poda�e� nie jest liczb� doskona��.";
}

//Program wy�wietlaj�cy na ekranie ci�g Fibonacciego do 20 elementu (ci�g Fibonacciego to ci�g gdzie ka�dy element 
//jest sum� dw�ch poprzednich, np. 0, 1, 1, 2, 3, 5, 8, 13 itd.)
void task13()
{
	int fibonacciNumber = 0, tmp = 1, tmpSecond = 0;

	for (int i = 0; i < 20; i++)
	{
		tmpSecond = fibonacciNumber;
		std::cout << fibonacciNumber << ", ";
		fibonacciNumber = fibonacciNumber + tmp;
		tmp = tmpSecond;
	}
}

/* Program, k�ry wy�wietli poni�sze wzory:
****     *		54321        121212        122333
*** 	***		65432        212121        223334444
**	   *****	76543        121212        333444455555
*     *******	87654        212121        444455555666666
*/
void task14()
{
	std::cout << "**** \n***\n** \n* \n";
	std::cout << "\n   *\n  ***\n *****\n*******\n";
	std::cout << "\n54321\n 65432\n 76543\n 87654\n";
	std::cout << "\n121212\n 212121\n 121212\n 212121\n";
	std::cout << "\n122333\n 223334444\n 333444455555\n 444455555666666";
}

//Napisz program kt�ry roz�o�y liczb� na czynniki pierwsze
void task15()
{

}

//Oblicz sum� szeregu 1/1^2 + 1/2^2 + 1/3^2 + ... +1/n^2. Je�eli si� nie pomylisz, to dla odpowiednio du�ej warto�ci n po przemno�eniu 
//jej przez 6 i spierwiastkowaniu powiniene� otrzyma� warto�� liczby ? (suma szeregu jest r�wna ?2/6). Zwr�� uwag�, �e pierwsza 
//warto�� indeksu to 1, a nie 0. Dok�adno�� oblicze� mo�na sprawdzi� por�wnuj�c z warto�ci� odczytan� z w�asno�ci Math.PI.

int main()
{
    setlocale(LC_CTYPE, "polish");
	task15();
}

