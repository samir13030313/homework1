#include <iostream>

int main() {
    short shortVar;
    int intVar;
    long longVar;
    long long longLongVar;
    float floatVar;
    double doubleVar;
    long double longDoubleVar;
    bool boolVar;

    std::cout << "short: " << &shortVar << " " << sizeof(shortVar) << std::endl;
    std::cout << "int: " << &intVar << " " << sizeof(intVar) << std::endl;
    std::cout << "long: " << &longVar << " " << sizeof(longVar) << std::endl;
    std::cout << "long long: " << &longLongVar << " " << sizeof(longLongVar) << std::endl;
    std::cout << "float: " << &floatVar << " " << sizeof(floatVar) << std::endl;
    std::cout << "double: " << &doubleVar << " " << sizeof(doubleVar) << std::endl;
    std::cout << "long double: " << &longDoubleVar << " " << sizeof(longDoubleVar) << std::endl;
    std::cout << "bool: " << &boolVar << " " << sizeof(boolVar) << std::endl;

    return 0;
}
