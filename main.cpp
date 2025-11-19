#if __linux__                                           //DO NOT EDIT OR REMOVE
    #define CATCH_CONFIG_RUNNER                         //DO NOT EDIT OR REMOVE
    #include "catch.hpp"                                //DO NOT EDIT OR REMOVE
    int runCatchTests(int argc, char* const argv[]){    //DO NOT EDIT OR REMOVE
        return Catch::Session().run(argc, argv);}       //DO NOT EDIT OR REMOVE
#endif                                                  //DO NOT EDIT OR REMOVE

#include "main.hpp"                                     //Use this header file for all the functions' declaration
#include <iostream>
#include <cmath>
#include <iomanip>

double calc(double num1, char op, double num2) {
    switch (op) {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            return num1 / num2;
        case '%': {
            long long int_num1 = static_cast<long long>(std::round(num1));
            long long int_num2 = static_cast<long long>(std::round(num2));

            if (int_num2 == 0) {
                std::cerr << "Error: Modulus by zero after rounding!" << std::endl;
                return 0.0;
            }
            return static_cast<double>(int_num1 % int_num2);
        }
        default:
            std::cerr << "Error: Unknown operation '" << op << "'. Only +, -, *, /, % are supported." << std::endl;
            return 0.0;
    }
}

int main(int argc, char* const argv[]){                 //DO NOT EDIT OR REMOVE
    #if __linux__                                       //DO NOT EDIT OR REMOVE
        return runCatchTests(argc, argv);               //DO NOT EDIT OR REMOVE
    #endif                                              //DO NOT EDIT OR REMOVE
    //add and complete your codes after this line

    double number1;
    char operation;
    double number2;
    double result;

    for (;;) {
        std::cout << "Calculate > ";

        if (!(std::cin >> number1 >> operation >> number2)) {
            break;
        }

        result = calc(number1, operation, number2);

        if (operation == '+' || operation == '-' || operation == '*' || operation == '/' || operation == '%') {
            std::cout << "Answer: " 
                      << std::fixed 
                      << std::setprecision(4) 
                      << result 
                      << std::endl;
        }
    }

    return 0;
}