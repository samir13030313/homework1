#include <iostream>

int main() {
    int a, b, c;

    // Запрашиваем ввод чисел у пользователя
    std::cout << "Введите первое число: ";
    std::cin >> a;
    std::cout << "Введите второе число: ";
    std::cin >> b;
    std::cout << "Введите третье число: ";
    std::cin >> c;

    // Находим максимальное, среднее и минимальное значение
    int max = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
    int min = (a < b) ? (a < c ? a : c) : (b < c ? b : c);
    int mid = (a + b + c) - max - min;

    // Выводим результаты
    std::cout << "Результат: " << max << " " << mid << " " << min << std::endl;

    return 0;
}
