#include <iostream>

//Napisz program kt�ry pobierze znak od u�ytkownika i wy�wieli go
void task1()
{
    char characterFromUser;
    std::cout << "Podaj jeden znak:\n";
    std::cin >> characterFromUser;

    std::cout << "Podano: " << characterFromUser << "\n";

    characterFromUser = characterFromUser + 1;

    std::cout << "Podano: " << characterFromUser << "\n";

    characterFromUser = 97;
    characterFromUser = 'a';
    characterFromUser = 'a' + 1; // 'b'
}

// Napisz program, kt�ry wczyta znak z klawiatury i sprawdzi czy jest to ma�a litera alfabetu.
void task2()
{
	char characterFromUser;
	std::cout << "Podaj jeden znak:\n";
	std::cin >> characterFromUser;

	//wersja 1
	if (characterFromUser == 'a'
		|| characterFromUser == 'b'
		|| characterFromUser == 'c'
		|| characterFromUser == 'd'
		//...
		|| characterFromUser == 'z')
	{
		std::cout << "Poda�es ma�� liter� alfabetu\n";
	}
	else
	{
		std::cout << "Poda�e� inny znak\n";
	}

	//wersja 2
	if (characterFromUser >= 97
		&& characterFromUser <= 122)
	{
		std::cout << "Poda�es ma�� liter� alfabetu\n";
	}
	else
	{
		std::cout << "Poda�e� inny znak\n";
	}

	//wersja 3
	if (characterFromUser >= 'a'
		&& characterFromUser <= 'z')
	{
		std::cout << "Poda�es ma�� liter� alfabetu\n";
	}
	else
	{
		std::cout << "Poda�e� inny znak\n";
	}
}

//Napisz program, kt�ry poprosi cie o twoje imi� i ci� przywita.
void task3()
{
	std::string userName;
	std::cout << "Podaj swoje imi�\n";
	std::cin >> userName;

	std::cout << "Witaj " << userName << " tutaj.\n";

	userName = "To jest nowy tekst";
}

//Program sprawdzaj�cy czy podane has�o jest poprawne 
// (np. je�li has�o jest "abc123", 
// program powinien wy�wietli� "has�o poprawne",
//  je�li jest inne, powinien wy�wietli� "has�o niepoprawne").
void task4()
{
	std::string password;
	std::cout << "Podaj has�o\n";
	std::cin >> password;

	if (password == "abc123")
	{
		std::cout << "Has�o poprawne\n";
	}
	else
		std::cout << "Has�o niepoprawne\n";
}

//Napisz program, kt�ry wczyta �a�cuch znak�w i policzy ile jest ma�ych liter 'a'.
void task5()
{
	std::string textFromUser = "dfsdfg";
	std::cout << "Podaj tekst\n";
	std::cin >> textFromUser;

	std::cout << "Podany tekst: " << textFromUser << "\n";
	std::cout << "Pierwszy znak w tek�cie: " << textFromUser[0] << "\n";
	std::cout << "Drugi znak w tek�cie: " << textFromUser[1] << "\n";
	int length = textFromUser.length();
	std::cout << "D�ugo�� �a�cucha znak�w: " << length << "\n";
	std::cout << "Ostatni znak w tek�cie: " << textFromUser[length - 1] << "\n";

	int counter = 0;
	for (int i = 0; i < length; i++)
	{
		if (textFromUser[i] == 'a')
			counter++;
	}

	std::cout << "Ma�ych liter 'a' jest: " << counter << "\n";
}

// Napisz program, kt�ry b�dzie prosi� o has�o.
// Nie przepu�ci dalej dop�ki nie zostanie ono podane prawid�owo.
void task6()
{
	std::string password;
	do
	{
		std::cout << "Podaj has�o\n";
		std::cin >> password;
	} while (password != "abc123");
}

//Napisz program, kt�ry pobiera od u�ytkownika ci�g znak�w 
// i wy�wietla liczb� samog�osek i sp�g�osek w tym ci�gu.
void task7()
{

}

/*
* Popro� u�ytkownika o wprowadzenie liczby ca�kowitej w systemie dziesi�tnym. Nast�pnie skonwertuj t� liczb� na system dw�jkowy (binarny) i wy�wietl wynik.
* Program sprawdzaj�cy czy podany ci�g znak�w jest palindromem (czyli takim, kt�ry czytany od ty�u jest taki sam, jak czytany od przodu, np. "kajak")
* Program sprawdzaj�cy czy podane dwa s�owa s� anagramami (czyli takimi, kt�re zawieraj� te same litery, ale w innym uk�adzie, np. "klasa" i "salka")
* Program wyci�gaj�cy informacje z numeru PESEL
* Program implementuj�cy algorytm szyfrowania Cezara (proste szyfrowanie, w kt�rym ka�dy znak w tek�cie jest zast�powany innym znakiem, przesuni�tym o sta�� liczb� pozycji w alfabecie).*/


int main()
{
	setlocale(LC_CTYPE, "polish");
    task1();
}