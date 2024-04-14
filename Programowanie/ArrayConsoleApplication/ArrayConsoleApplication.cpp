#include <iostream>

//Napisz program, kt�ry wczyta 5 liczb a nast�pnie wy�wietli je w odwrotnej kolejno�ci.
void task1()
{
    const unsigned int ARRAY_NUMBER_SIZE = 5;
   
    int numbers[ARRAY_NUMBER_SIZE];
    for (int i = 0; i < ARRAY_NUMBER_SIZE; i++)
    {
        std::cout << "Podaj " << (i + 1) << " liczb�\n";
        std::cin >> numbers[i];
    }

    for (int i = ARRAY_NUMBER_SIZE - 1; i >= 0; i--)
    {
        std::cout << numbers[i] << ", ";
    }
    std::cout << "\n";
}

//Program, kt�ry wype�ni tablice (100 elementow�) liczbami od 1 do 99, a nast�pnie obliczy sum� oraz �redni� liczb parzystych.
void task2()
{
    const unsigned short ARRAY_NUMBER_SIZE = 100;
    
    int numbers[ARRAY_NUMBER_SIZE];
    for (int i = 1; i < ARRAY_NUMBER_SIZE; i++)
    {
        numbers[i] = i;
        std::cout << numbers[i] << " ,";
    }

    std::cout << "\n";
    
    int sum = 0, counter = 0;
    for (int i = 1; i < ARRAY_NUMBER_SIZE; i++)
    {
        if (numbers[i] % 2 == 0)
        {
            sum = sum + numbers[i];
            counter++;
        }
        
    }
    
    std::cout << "\n";
    std::cout << "Suma liczb parzystych tablicy wynosi: " << sum << "\n";
   
    int arithmeticMeanOfEvenNumbers = sum / counter;

    std::cout << "�rednia arytmetyczna tych liczb wynosi: " << arithmeticMeanOfEvenNumbers;
}

//Napisz program kt�ry przyjmie od u�ytkownika list� ocen z pewnego przedmiotu i obliczy ich �redni� arytmetyczn�.
/*Funkcje programu :

*Popro� u�ytkownika o wprowadzenie ka�dej oceny.
*Zapisz oceny w tablicy.
*Oblicz �redni� arytmetyczn� ocen.
*Wy�wietl �redni� ocen na ekranie.
*/

void task3()
{
    std::cout << "Podaj swoje oceny z jednego dowolnego przedmiotu szkolnego, mo�esz poda� maksymalnie 10 ocen\n";
    std::cout << "Napisz z jakiego przedmiotu obliczasz �redni�. Napisz to w spos�b np. historii, biologi, chemi, angielskiego itd.\n";
    std::string subjectFromUser;
    std::cin >> subjectFromUser;

    const unsigned int ARRAY_NUMBERS_SIZE = 10;
    int grades[ARRAY_NUMBERS_SIZE];
    int sum = 0, counter = 0;

    for (int i = 0; i < ARRAY_NUMBERS_SIZE; i++) {
        bool grade = false;
        while (grade == false) 
        {
            std::cout << "Podaj swoj� " << (i + 1) << " ocen�: ";
            std::cin >> grades[i];
            if (grades[i] >= 1 && grades[i] <= 6) 
            {
                grade = true;
                std::cout << "\n";
                sum = sum + grades[i];
                counter++;
            }
            else 
            {
                std::cout << "Podana ocena jest w z�ej skali. Podaj ocen� z zakresu od 1 do 6.\n";
         
            }
        }
    }

    int arithmeticAverage = sum / counter;
    std::cout << "Twoja �rednia ocen z " + subjectFromUser <<  " wynosi: " << arithmeticAverage << "\n";
}

void task4()
{
    std::string text[7] = { "Poniedzia�ek", "Wtorek", "�roda", "Czwartek", "Pi�tek", "Sobota", "Niedziela"};
    std::string textFromUser;
    std::cin >> textFromUser;
    if (textFromUser == text[1])
    {
        std::cout << "Prawid�owo\n";
    }
    else
    {
        std::cout << "Nieprawid�owo\n";
    }
}

int main()
{
    setlocale(LC_CTYPE, "polish");
    task4();
}