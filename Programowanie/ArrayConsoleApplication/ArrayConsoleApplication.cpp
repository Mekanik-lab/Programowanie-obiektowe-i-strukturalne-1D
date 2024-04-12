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

int main()
{
    setlocale(LC_CTYPE, "polish");
    task2();
}