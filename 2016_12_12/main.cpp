#include <iostream>

int main() {

  char letter = 'a';
  char *letterpointer = &letter;
  int number = 1;
  int *numberpointer = &number;
  int array[10]={8, 7, 6, 2, 1, 0, 5, 4, 9, 0};

  // std::cout << letter << std::endl;
  // std::cout << &letter << std::endl;
  // std::cout << letterpointer << std::endl;
  // std::cout << *letterpointer << std::endl;
  //
  // std::cout << std::endl;
  //
  // std::cout << sizeof(float) << std::endl;
  //
  // std::cout << number << std::endl;
  // std::cout << &number << std::endl;
  // std::cout << numberpointer << std::endl;
  // std::cout << *numberpointer << std::endl;
  //
  // std::cout << std::endl;

  std::cout << "array : " << array << std::endl;
  std::cout << std::endl;

  for (int i = 0; i < 10; i++) {
    std::cout << "array[i]   : " << array[i] << std::endl;
    std::cout << "(array)+i  : " << (array)+i << std::endl;
    std::cout << "*(array)+i : " << *(array)+i << std::endl;
    std::cout << "*(array+i) : " << *(array+i) << std::endl;
    std::cout << std::endl;
  }

  // exit program
  return 0;

}
