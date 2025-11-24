#include <iostream>
#include <iomanip>

void printTruthTable(const std::string& operatorName, bool (*op)(bool, bool)) {
    std::cout << "Оператор: " << operatorName << std::endl;
    std::cout << std::boolalpha; 
    std::cout << std::setw(10) << "a" << std::setw(10) << "b" << std::setw(10) << "result" << std::endl;

    for (bool a : {true, false}) {
        for (bool b : {true, false}) {
            std::cout << std::setw(10) << a 
                      << std::setw(10) << b 
                      << std::setw(10) << op(a, b) 
                      << std::endl;
        }
    }
    std::cout << std::endl;
}

bool logicalOr(bool a, bool b) {
    return a || b;
}

bool logicalAnd(bool a, bool b) {
    return a && b;
}

int main() {
    
    printTruthTable("||", logicalOr);

    
    printTruthTable("&&", logicalAnd);

    return 0;
}
