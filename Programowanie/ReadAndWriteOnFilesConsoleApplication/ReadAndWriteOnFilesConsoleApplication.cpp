#include <iostream>
#include <fstream>

void task1()
{
    std::string name;
    int age;

    std::cout << "Podaj imi�:\n";
    std::cin >> name;

    std::cout << "Podaj sw�j wiek:\n";
    std::cin >> age;

    std::ofstream writeInFile;
    writeInFile.open("c:\\dane.txt");

    if (writeInFile.is_open() == true)
    {
        writeInFile << name;
        writeInFile << "\n";
        writeInFile << age;

        writeInFile.close();
    }
    else
        std::cout << "B��d otwarcia pliku\n";
}

int main()
{
    setlocale(LC_CTYPE, "polish");
    task1();
}


