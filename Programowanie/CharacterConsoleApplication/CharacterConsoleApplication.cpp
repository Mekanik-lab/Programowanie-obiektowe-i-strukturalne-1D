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

}


int main()
{
    task1();
}