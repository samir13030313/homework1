#include <iostream>
#include <cmath> // Для функции pow

double power(double base, double exponent) {
  return std::pow(base, exponent);
}

int main() {
  std::cout << "5 в степени 2 = " << power(5, 2) << std::endl;
  std::cout << "3 в степени 3 = " << power(3, 3) << std::endl;
  std::cout << "4 в степени 4 = " << power(4, 4) << std::endl;

  // Примеры с дробными и отрицательными степенями:
  std::cout << "2 в степени 0.5 = " << power(2, 0.5) << std::endl; // Квадратный корень из 2
  std::cout << "2 в степени -1 = " << power(2, -1) << std::endl; // 1 / 2 = 0.5


  return 0;
}
