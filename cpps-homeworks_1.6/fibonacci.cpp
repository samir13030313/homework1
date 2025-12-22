#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

// Рекурсивная функция для вычисления n-го числа Фибоначчи
long long fibonacci_recursive(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
    }
}

// Итеративная функция для вычисления n-го числа Фибоначчи
vector<long long> fibonacci_iterative(int n) {
    vector<long long> sequence;
    long long a = 0, b = 1;
    for (int i = 0; i < n; ++i) {
        sequence.push_back(a);
        long long temp = a;
        a = b;
        b = temp + b;
    }
    return sequence;
}

int main() {
    int num;

    cout << "Введите число: ";
    cin >> num;

    if (num < 0) {
        cout << "Пожалуйста, введите неотрицательное число." << endl;
    } else {
        // Используем итеративный подход, так как рекурсивный будет слишком медленным для больших чисел
        vector<long long> fib_sequence = fibonacci_iterative(num);

        cout << "Числа Фибоначчи: ";
        for (size_t i = 0; i < fib_sequence.size(); ++i) {
            cout << fib_sequence[i] << (i == fib_sequence.size() - 1 ? "" : " ");
        }
        cout << endl;
    }

    return 0;
}
