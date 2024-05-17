#include <iostream>

/*
Funkcja - zbi�r instrukcji. Definicja/deklaracja funkcji sk�ada si� z dw�ch cz�ci:
* nag�wek - spos�b u�ycia funkcji
	- typ zwracany
	- nazwa (poprawny identyfikator)
	- parametr�w w nawiasie (nieobowi�zkowe)
* cia�o - zbi�r instrukcji

typZwracany nazwaFuncji(parametry)
{
	//cia�o funkcji
}
*/

void showHello()
{
	std::cout << "Hello World\n";
}

void showHelloMaciek()
{
	std::cout << "Witaj Maciej\n";
}

void showHelloJan()
{
	std::cout << "Witaj Jan\n";
}

void showWelcome(std::string n)
{
	std::cout << "Witaj " << n << "\n";
}

int main()
{
	setlocale(LC_CTYPE, "polish");
	showHello();
	//jaki� kod
	showHello();
	showHelloMaciek();
	showHelloJan();
	std::cout << "\n";
	std::string name;
	name = "Mackiek";
	showWelcome(name);
	name = "Jan";
	showWelcome(name);
	showWelcome("Anna");
}
