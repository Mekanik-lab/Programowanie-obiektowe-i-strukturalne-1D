#include <iostream>

//Napisz program, kt�ry wy�wietli "Hello World" tyle razy ile chce u�ytkownik
void task1()
{
	int number;
    
	do
	{
		std::cout << "Podaj pierwsz� liczb� dodatni�: \n";
		std::cin >> number;
	} while (number < 0);
    
	for (int counter = 0; counter != number; counter++)
	{
		std::cout << "Hello World\n";
	}
}

int main()
{
    setlocale(LC_CTYPE, "polish");
    task1();
}

