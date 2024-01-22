#include <iostream>
//
/*

Priorytety operator�w:

* /
+ -
> < >= <= == !=
&&
||
=

Operatory por�wnania:
>   wi�kszo�ci
<   mniejszo�ci
>=  wieksze b�d� r�wne
<=  mniesze b�d� r�wne
==  r�wne
!=  r�ne

Operatory logiczne:

||  or/lub
&&  and/i
!   not/nie


 A  B   A || B      A && B      !A
 f  f      f           f         t
 f  t      t           f
 t  f      t           f         f
 t  t      t           t


*/

/*
* 
* 
* 
* 
* Napisz program, kt�ry poprosi u�ytkownika o podanie liczby od 1 do 7 i wy�wietli odpowiadaj�cy mu dzie� tygodnia.
* Napisz program, kt�ry wczyta numer miesi�ca i wy�wietli jego s�owny odpowiednik.
* Napisz program, kt�ry poprosi u�ytkownika o podanie roku i sprawdzi, czy jest to rok przest�pny. Wy�wietl odpowiedni komunikat.
* Napisz program, kt�ry poprosi u�ytkownika o podanie liczby ca�kowitej i obliczy jej warto�� bezwzgl�dn�. Wy�wietl wynik.
* Napisz program, kt�ry poprosi u�ytkownika o podanie wieku i sprawdzi, czy osoba jest pe�noletnia. Wy�wietl odpowiedni komunikat.
* Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci trzech odcink�w i sprawdzi, czy mo�na zbudowa� z nich tr�jk�t. Wy�wietl odpowiedni komunikat.
* Napisz program, kt�ry poprosi u�ytkownika o podanie oceny w skali 100-punktowej i przeliczy j� na ocen� procentow� w przedziale od 0 do 100. Wy�wietl wynik.
* Program wy�wietlaj�cy odpowiedni komunikat w zale�no�ci od podanej oceny (np. "bardzo dobry" dla oceny 5, "dobry" dla oceny 4 itd.)
* Napisz program, kt�ry na podstawie wsp�czynnik�w r�wnania kwadratowego (a, b, c) sprawdzi, czy to r�wnanie ma rozwi�zania rzeczywiste, i je�li tak, to je obliczy.
* Program sprawdzaj�cy czy podana data jest poprawna (np. sprawdzaj�c, czy dzie� jest z zakresu od 1 do 31, miesi�c od 1 do 12 itd.)
*/


//Napisz program, kt�ry pobierze liczb� od u�ytkownika i wy�wietli czy jest ona dodatnia czy nie.
void task1()
{
    int number;
    std::cout << "Podaj liczb� \n";
    std::cin >> number;

    //wersja 1
    if (number > 0)
    {
        std::cout << "Liczba jest dodatnia\n";
    }

    if (number <= 0)
    {
        std::cout << "Liczba jest ujemna\n";
    }

    //wersja 2
    if (number > 0)
    {
        std::cout << "Liczba jest dodatnia\n";
    }
    else
    {
        std::cout << "Liczba jest ujemna\n";
    }

    
}

//Napisz program, kt�ry wczyta liczb�
//i sprawdzi czy jest ona z zakresu <1;10).
void task2()
{
    int number;
    std::cout << "Podaj liczb� \n";
    std::cin >> number;

    //wersja 1
    if (number >= 1)
    {
        if (number < 10)
        {
            std::cout << "Liczba jest w zakresie\n";
        }
        else
        {
            std::cout << "Liczba nie jest w zakresie\n";
        }
    }
    else
    {
        std::cout << "Liczba nie jest w zakresie\n";
    }

    //wersja 2
    if (number >= 1 && number < 10)
    {
        std::cout << "Liczba jest w zakresie\n";
    }
    else
    {
        std::cout << "Liczba nie jest w zakresie\n";
    }
}

void task3()
{
    int firstNumber, secondNumber, thirdNumber, fourthNumber;
    std::cout << "Podaj liczbe\n";
    std::cin >> firstNumber;
    std::cout << "Podaj liczbe\n";
    std::cin >> secondNumber;
    std::cout << "Podaj liczbe\n";
    std::cin >> thirdNumber;
    std::cout << "Podaj liczbe\n";
    std::cin >> fourthNumber;

    if (fourthNumber > firstNumber && fourthNumber > secondNumber && fourthNumber > thirdNumber)
    {
        std::cout << "Najwi�ksza warto�� to " << fourthNumber << "\n";
    }
    else
    {
        if (thirdNumber > firstNumber && thirdNumber > secondNumber)
            std::cout << "Najwi�ksza warto�� to " << thirdNumber << "\n";
        else
        {
            if (secondNumber > firstNumber)
                std::cout << "Najwi�ksza warto�� to " << secondNumber << "\n";
            else
                std::cout << "Najwi�ksza liczba to " << firstNumber << "\n";
        }
    }
}

//Napisz program, kt�ry wczyta jedn� liczb� i wy�wietli j� w kolejno�ci rosn�cej.
void task4()
{
    int firstNumber;
    std::cout << "Podaj liczb�\n";
    std::cin >> firstNumber;

    std::cout << "Liczby w kolejno�ci rosn�cej:\n";
    std::cout << firstNumber;
    std::cout << "\n";
}


//Napisz program, kt�ry wczyta dwie liczby i wy�wietli je w kolejno�ci rosn�cej.
void task5()
{
    int firstNumber, secondNumber;
    std::cout << "Podaj liczb�\n";
    std::cin >> firstNumber;
    std::cout << "Podaj liczb�\n";
    std::cin >> secondNumber;

    std::cout << "Liczby w kolejno�ci rosn�cej:\n";
    if (firstNumber > secondNumber)
        std::cout << secondNumber << "," << firstNumber;
    else
        std::cout << firstNumber << "," << secondNumber;
}

//Napisz program, kt�ry wczyta trzy liczby i wy�wietli je w kolejno�ci rosn�cej.
void task6()
{
    int firstNumber, secondNumber, thirdNumber;
    std::cout << "Podaj liczb�\n";
    std::cin >> firstNumber;
    std::cout << "Podaj liczb�\n";
    std::cin >> secondNumber;
    std::cout << "Podaj liczb�\n";
    std::cin >> thirdNumber;

    std::cout << "Liczby w kolejno�ci rosn�cej:\n";
    if (thirdNumber < firstNumber
        && thirdNumber < secondNumber)
    {
        std::cout << thirdNumber << ", ";
        if (secondNumber < firstNumber)
            std::cout << secondNumber << ", " << firstNumber;
        else
            std::cout << firstNumber << ", " << secondNumber;
    }
    else
    {
        if (secondNumber < firstNumber)
        {
            std::cout << secondNumber << ", ";
            if (thirdNumber < firstNumber)
                std::cout << thirdNumber << ", " << firstNumber;
            else
                std::cout << firstNumber << ", " << thirdNumber;
        }
        else
            std::cout << firstNumber << ", ";
        if (thirdNumber < secondNumber)
            std::cout << thirdNumber << ", " << secondNumber;
        else
            std::cout << secondNumber << ", " << thirdNumber;
    }
    
}

//Napisz program, kt�ry poprosi u�ytkownika o podanie dw�ch liczb ca�kowitych i sprawdzi, czy s� one r�wne.Wy�wietl odpowiedni komunikat.
void task7()
{
    int firstNumber, secondNumber;
    std::cout << "Podaj dwie liczby ca�kowite, aby sprawdzi� czy s� r�wne";
    std::cout << "Podaj pierwsz� liczb�:\n";
    std::cin >> firstNumber;
    std::cout << "Podaj drug� liczb�:\n";
    std::cin >> secondNumber;

    if (firstNumber == secondNumber)
        std::cout << "Liczby s� sobie r�wne";
    else
        std::cout << "Liczby s� r�ne";
}

//Napisz program, kt�ry poprosi u�ytkownika o podanie liczby ca�kowitej i sprawdzi, czy jest ona parzysta. Wy�wietl odpowiedni komunikat.
void task8()
{
    int numberFromUser;
    std::cout << "Podaj liczb�, aby sprawdzi� czy jest parzysta";
    std::cout << "Podaj liczb�:\n";
    std::cin >> numberFromUser;

    if (numberFromUser % 2 == 0)
        std::cout << "Liczba jest parzysta";
    else
        std::cout << "Liczba nie jest parzysta";
}

//Napisz program, kt�ry poprosi u�ytkownika o podanie liczby ca�kowitej i sprawdzi, czy jest ona podzielna zar�wno przez 3, jak i przez 5. Wy�wietl odpowiedni komunikat.
void task9()
{
    int numberFromUser;
    std::cout << "Program sprawdza czy liczba jest podzielna przez 3 i przez 5";
    std::cout << "Podaj liczb�:\n";
    std::cin >> numberFromUser;

    if (numberFromUser % 3 == 0 && numberFromUser % 5 == 0)
        std::cout << "Liczba jest podzielna przez 3 i przez 5";
    else
        std::cout << "Liczba nie jest podzielna przez te liczby";
}

/*Napisz program, kt�ry poprosi u�ytkownika o podanie masy cia�a(w kilogramach) i wzrostu(w metrach).
Na podstawie tych danych oblicz wska�nik BMI(Body Mass Index) i wy�wietl odpowiedni komunikat informuj�cy o stanie zdrowia.
BMI = masa / wzrost ^ 2
poni�ej 16 - wyg�odzenie
16 - 16.99 - wychudzenie
17 - 18.49 - niedowag�
18.5 - 24.99 - wag� prawid�ow�
25.0 - 29.9 - nadwag�
30.0 - 34.99 - I stopie� oty�o�ci
35.0 - 39.99 - II stopie� oty�o�ci
powy�ej 40.0 - oty�o�� skrajn�
*/
void task10()
{
    float heightFromUser, weightFromUser, bMI;
    std::cout << "Program oblicza BMI\n";
    std::cout << "Podaj sw�j wzrost\n";
    std::cin >> heightFromUser;
    std::cout << "Podaj swoj� wag�\n";
    std::cin >> weightFromUser;

    bMI = weightFromUser / (heightFromUser * heightFromUser);

    if (bMI < 16)
        std::cout << "Jeste� wyg�odzony";
    else
        if (bMI >= 16 && bMI <= 16.99)
            std::cout << "Jeste� wychudzony";
        else
            if (bMI >= 17 && bMI <= 18.49)
                std::cout << "Masz niedowag�";
            else
                if (bMI >= 18.5 && bMI <= 24.99)
                    std::cout << "Masz prawid�ow� wag�";
                else
                    if (bMI >= 25 && bMI <= 29.9)
                        std::cout << "Masz nadwag�";
                    else
                        if (bMI >= 30 && bMI <= 34.99)
                            std::cout << "Masz I stopie� oty�o�ci";
                        else
                            if (bMI >= 35 && bMI <= 39.99)
                                std::cout << "Masz II stopie� oty�o�ci";
                            else
                                if (bMI >= 40)
                                    std::cout << "Masz skrajn� oty�o��";
                                else
                                    std::cout << "....";
                                
        

}

int main()
{
    //task2();
    //task3();
    //task4();
    //task5();
    //task6();
    //task7();
    //task8();
    //task9();
    task10();
}