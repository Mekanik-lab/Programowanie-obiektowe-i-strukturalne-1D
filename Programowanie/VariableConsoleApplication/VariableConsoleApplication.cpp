#include <iostream>

//Napisz program, kt�ry wczyta od u�ytkownika jego wiek a nast�pnie wy�wietli go na konsoli
void task1()
{
	short ageFromUser;
	std::cout << "Podaj swoj wiek: ";
	std::cin >> ageFromUser;

	std::cout << "Masz " << ageFromUser << " lat.\n";
}

//Stw�rz program, kt�ry pobiera od u�ytkownika d�ugo�� w metrach i przelicza j� na centymetry, milimetry i kilometry. Wy�witetl wynik.
void task2()
{
	float  lenghtInMeterFromUser;
	std::cout << "Podaj dlugosc w metrach: ";
	std::cin >> lenghtInMeterFromUser;

	float  lenghtInCentimiterFromUser;
	lenghtInCentimiterFromUser = lenghtInMeterFromUser * 100;

	float  lenghtInMilimiterFromUser;
	lenghtInMilimiterFromUser = lenghtInCentimiterFromUser * 10;

	float  lenghtInKilometerFromUser;
	lenghtInKilometerFromUser = lenghtInMeterFromUser / 1000;

	std::cout << "Metry: " << lenghtInMeterFromUser << "\n";
	std::cout << "Centymetry: " << lenghtInCentimiterFromUser << "\n";
	std::cout << "Milimetry: " << lenghtInMilimiterFromUser << "\n";
	std::cout << "Kilometry: " << lenghtInKilometerFromUser << "\n";

}



int main()
{
	//task1();
	task2();
}



/*

Algorytm - sko�czony zbi�r instrukcji realizuj�cy postawione przed nim zadanie. Kolejno�� instrukcj w zbiorze jest okre�lona.
Sposoby zapisu algorytmu:
* W punktach
* Opis s�owny
* J�zyk programowania lub pseudokod
* Schemat blokowy

Zmienna - jest to pewien obszar pami�ci, s��cy do przechowywania danych, te dane mo�na modyfikowa�
Zmienna pozwala przechowywa� tylko jedn� warto�� w danym momencie czasu

Deklaracja zmiennej - moment jej utworzenia
typ_zmiennej nazwa_zmiennej;
Typ zmiennej - m�wi o wielko�ci obszaru w pami�ci i o rodzaju przechowywanych danych

short		liczby ca�kowite ze znakiem		2 bajty -> 16 bit�w		<-32 768; 32 767>
int/long	liczby ca�kowite ze znakiem		4 bajty -> 32 bity		<-2 147 483 648; 2 147 483 647> od - 2 miliard�w do 2 miliard�w
long long	liczby ca�kowite ze znakiem		8 bajt�w -> 64bity		<-9 223 372 036 854 775 808; 9 223 372 036 854 775 807> -9 trylion�w do 9 trylion�w

Je�eli przed powy�szymi typami danych  dodamy s�owo "unsigned" to
zakres jest od 0 do podwojonego zakresu g�rnego plus 1 (short->32 767*2 + 1)

float			liczby rzeczywiste ze znakiem 4 bajty
double			liczby rzeczywiste ze znakiem 8 bajt�w
long double		liczby rzeczywiste ze znakiem 12 bajt�w

Nazwa zmiennej jest to nazwa obszaru pami�ci. Poprzez t� nazw� odwo�ujemy si� do tego obszaru.
Wymagania kompilatora wzgl�dem nazwy:
* u�ycie tylko dozwolonych znak�w - alfabet angielsk a-z oraz A-Z
* cyfry arabskie	0-9
* podkre�lenie (pod�oga)_	(nie trzeba u�ywa� wszystkiego)

- pierwszym znakiem nie mo�e by� cyfra
- nie mo�e by� s�owem kluczowym w danym j�zyku programowania
- musi by� unikalny w danej widoczno��i (dana widoczno�� - zakres widoczno�ci zmiennej)

Wymagania programist�w:
- je�li nazwa sk�ada si� z wielu wyraz�w to zamiast spacji:
	* U�ywamy znaku podkre�lenia first_number_from_user
	* stosujemy camel case, czyli piszemy wszystko razem a s�owa (zaczynamy od drugiego)
	* zaczynamy z du�ej litery np.firstNumberFromUser
- nazwa zmiennej musi oddwa� charakter przechowywanych danych, czyli mie� znaczenie
- nazwy zmiennych po angielsku
*/