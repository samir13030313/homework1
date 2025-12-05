#include <iostream>

int main() {
  int number;
  int sum = 0;

  std::cout << "Введите целое число:" << std::endl;
  std::cin >> number;

  int original_number = number; 

  while (number != 0) {
    int digit = number % 10;  
    sum += digit;             
    number /= 10;            
  }

  std::cout << "Сумма цифр: " << sum << std::endl;

  return 0;
}
