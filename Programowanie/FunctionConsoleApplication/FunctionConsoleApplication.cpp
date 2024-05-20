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

void showWelcome(std::string n, int w)
{
	std::cout << "Witaj " << n << ". Wiek tej osoby to: " << w << " lat." << "\n";
}

void showWelcome(std::string n, int w, std::string a)
{
	showWelcome(n, w);
	std::cout << "Adres to: " << a << "\n";
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
	int age = 10;
	showWelcome("Damian", age, "ul.Krakowska 1");
	//kolejno�� parametr�w, kolejno�� deklaracji w funkcji np. void showWelcomeAndAge(std::string n, int w)
	//przeci��enie funkcji - ta sama nazwa funkcji r�nica w parametrach
	//dodanie przestrzeni
	/*
		namespace nazwaPrzestrzeni
		{
			np.funkcja
		}
		odwo�anie sie do ptzestrzeni nazwaPrzestrzeni::funkcja();
		je�li s� w sobie namespace to wtedy p1::p2::funkcja();
		p1 - przestrze� 1
	*/
}