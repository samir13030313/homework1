#include <iostream>

int main() {
  int number;
  int sum = 0;

  do {
    std::cout << "Введите целое число или число '0', чтобы закончить:" << std::endl;
    std::cin >> number;  

    sum += number; 

  } while (number != 0); 

  std::cout << "Сумма: " << sum  - 0 << std::endl; 

  return 0;
}
