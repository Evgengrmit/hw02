#include <iostream>
#include <string>
int main()
{
  std::string name;  // User name
  std::cin >> name; // Entering the user name
  std::cout << "Hello world from " << name
            << std::endl;  // Output a greeting from the user
  return 0;

}
