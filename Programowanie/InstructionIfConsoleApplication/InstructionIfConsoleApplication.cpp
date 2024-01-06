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

int main()
{
    //task2();
    task3();
}


