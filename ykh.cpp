#include <iostream>
#include <string>

int main()
{
    std::cout << "Hello World!\n"; //Приветствие мира
    std::string name; //Создание имени
    std::cin >> name; //Ввод имени
    std::cout << "Hello to dear " << name << "!" << std::endl; //Приветствие пользователя
}