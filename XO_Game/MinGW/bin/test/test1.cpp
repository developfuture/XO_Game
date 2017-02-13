
#include <string> 
#include <iostream>
#include "windows.h"



using namespace std;


int main()
{
  std::string name;
  std::cout << "What is your name? ";
  getline (std::cin, name);
  std::cout << "Hello, " << name << "!\n";
  getline (std::cin, name);
  
}
