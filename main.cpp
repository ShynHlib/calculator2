#include <iostream>
#include "calculator.h"

int main() {
    Calculator calc;

    double a = 10.5;
    double b = 5.3;

    int resultAdd = calc.Add(a, b);
    int resultSub = calc.Sub(a, b);

    std::cout << "Sum: " << resultAdd << std::endl;
    std::cout << "Subtraction: " << resultSub << std::endl;

    return 0;
}

