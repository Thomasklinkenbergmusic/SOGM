//
// Thomas Klinkenberg - 2016
//

#include <iostream>
#include "Checkage.h"

int main() {
  std::cout << "Program starts!\n\n";

  // Ask for input from user
  std::string inputDay, inputMonth, inputYear;
  std::cout << "Day?"<< std::endl;
  std::cin >> inputDay;
  std::cout << "Month?" << std::endl;
  std::cin >> inputMonth;
  std::cout << "Year?" << std::endl;
  std::cin >> inputYear;

  // Exit program
  std::cout << "Exit program... \n";
  return 0;
}
