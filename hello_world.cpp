#include <iostream>
#include <string>

int
main()
{
  std::string name; // Имя пользователя
  std::cin >> name; // Ввод имени пользователя
  std::cout << "Hello world from " << name
            << std::endl; // Вывод приветствия от пользователя
  return 0;
}
