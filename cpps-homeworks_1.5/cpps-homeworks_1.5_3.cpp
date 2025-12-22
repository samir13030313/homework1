#include <iostream>
#include <limits> // Для использования std::numeric_limits

int main() {
    // Создание и инициализация двумерного массива
    int matrix[3][6] = {
        {15, 2, 33, 4, 50, 6},
        {7, 88, 9, 10, 11, 12},
        {13, 14, 1, 16, 17, 99}
    };

    std::cout << "Массив:\n";
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 6; ++j) {
            std::cout << matrix[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    // Поиск минимального и максимального элемента и их индексов
    int min_val = matrix[0][0];
    int max_val = matrix[0][0];
    int min_row = 0;
    int min_col = 0;
    int max_row = 0;
    int max_col = 0;

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 6; ++j) {
            if (matrix[i][j] < min_val) {
                min_val = matrix[i][j];
                min_row = i;
                min_col = j;
            }
            if (matrix[i][j] > max_val) {
                max_val = matrix[i][j];
                max_row = i;
                max_col = j;
            }
        }
    }

    std::cout << "Индекс минимального элемента: " << min_row << " " << min_col << std::endl;
    std::cout << "Индекс максимального элемента: " << max_row << " " << max_col << std::endl;

    return 0;
}
