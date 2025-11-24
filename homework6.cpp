#include <iostream>
#include <string>
#include <vector>

std::string numberToWords(int number) {
    if (number > 99 || number < -99) {
        return "Ошибка! Одно из чисел вне диапазона!";
    }

    const std::vector<std::string> units = {"", "один", "два", "три", "четыре", "пять", "шесть", "семь", "восемь", "девять"};
    const std::vector<std::string> teens = {"", "одиннадцать", "двенадцать", "тринадцать", "четырнадцать", "пятнадцать", "шестнадцать", "семнадцать", "восемнадцать", "девятнадцать"};
    const std::vector<std::string> tens = {"", "десять", "двадцать", "тридцать", "сорок", "пятьдесят", "шестьдесят", "семьдесят", "восемьдесят", "девяносто"};

    if (number == 0) {
        return "ноль";
    }

    std::string result = "";
    bool isNegative = false;
    if (number < 0) {
        isNegative = true;
        number = -number;
    }

    if (number >= 20 && number < 100) {
        result += tens[number / 10];
        if (number % 10 != 0) {
            result += " " + units[number % 10];
        }
    } else if (number >= 11 && number <= 19) {
        result += teens[number - 10];
    } else if (number == 10) {
        result += "десять";
    } else {
        result += units[number];
    }

    if (isNegative) {
        result = "минус " + result;
    }

    return result;
}

int main() {
    int num1, num2;

    std::cout << "Введите целое число: ";
    std::cin >> num1;

    std::cout << "Введите целое число: ";
    std::cin >> num2;

    if (num1 > 99 || num1 < -99 || num2 > 99 || num2 < -99) {
        std::cout << "Ошибка! Одно из чисел вне диапазона!" << std::endl;
        return 0;
    }

    std::string num1Words = numberToWords(num1);
    std::string num2Words = numberToWords(num2);

    if (num1 < num2) {
        std::cout << num1Words << " меньше чем " << num2Words << std::endl;
    } else if (num1 > num2) {
        std::cout << num1Words << " больше чем " << num2Words << std::endl;
    } else {
        std::cout << num1Words << " равно " << num2Words << std::endl;
    }

    return 0;
}
