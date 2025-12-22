#include <iostream>

void swap(int& a, int& b) {
  int temp = a;
  a = b;
  b = temp;
}

// Усложнение*: Обмен значениями без использования третьей переменной (с ограничениями).
// Ограничения: Может привести к переполнению, если сумма a и b слишком большая.
// Кроме того, этот метод работает только для числовых типов.

/*
void swap(int& a, int& b) {
  a = a + b;
  b = a - b;
  a = a - b;
}
*/

int main(int argc, char** argv) {
  int a = 5, b = 8;

  std::cout << "a = " << a << ", b = " << b << std::endl;

  swap(a, b);

  std::cout << "a = " << a << ", b = " << b << std::endl;

  return 0;
}
