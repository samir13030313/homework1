#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int arr[] = {10, 3, 4, 1, 8, 9, 7, 2, 6, 5}; // Инициализация массива
    int n = sizeof(arr) / sizeof(arr[0]); // Получение размера массива

    // Вывод массива до сортировки
    cout << "Массив до сортировки: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Сортировка пузырьком в обратную сторону
    bool swapped;
    do {
        swapped = false;
        for (int i = n - 1; i > 0; --i) {
            if (arr[i] < arr[i - 1]) {
                // Меняем элементы местами
                swap(arr[i], arr[i - 1]);
                swapped = true;
            }
        }
    } while (swapped);

    // Вывод массива после сортировки
    cout << "Массив после сортировки: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
