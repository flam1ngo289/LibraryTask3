#include <iostream>
#include <Windows.h>
#include <string>
#include "DynamicLeaver.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Leaver leaver;
    std::string input;
    std::cout << "Введите имя: ";
    std::cin >> input;

    std::string leaving = leaver.leave(input);

    std::cout << leaving << std::endl;

    return 0;;
}

