#include <iostream>

//Napisz program, kt�rypobierze liczb� od u�ytkownika i wy�wietli czy jest ona dodatnia czy nie.
void task1()
{
    int number;
    std::cout << "Podaj liczbe, ktorom chcesz sprawdzic: ";  "\n";
    std::cin >> number;
    
    //wersja 1
    if (number > 0)
    {
        std::cout << "Liczba jest dodatnia\n";
    }
    else 
    {
        std::cout << "Liczba jest ujemna\n";
    }
    
    //wersja 2
    /*if (number > 0)
    {
        std::cout << "Liczba jest dodatnia\n";
    }

    if (number <= 0)
    {
        std::cout << "Liczba jest ujemna\n";
    }
    */
}

void task2()
{
    int firstNumber, secondNumber, thirdNumber, fourthNumber;
    std::cout << "Podaj liczb�\n";
    std::cin >> firstNumber;
    std::cout << "Podaj liczb�\n";
    std::cin >> secondNumber;
    std::cout << "Podaj liczb�\n";
    std::cin >> thirdNumber;
    std::cout << "Podaj liczb�\n";
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

void task3()
{
    
}

int main()
{
    //task1();
    //task2();
}

/*
Operatory por�wnania:
>   wi�kszo�ci
<   mniejszo�ci
>=  wi�ksze lub r�wne
<=  mniejsze lub r�wne
== r�wno��
!= r�z�o��
*/


