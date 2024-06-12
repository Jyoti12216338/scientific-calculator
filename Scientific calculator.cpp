#include <iostream>
#include <cmath>

// Function declarations

double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
double sine(double angle);
double cosine(double angle);
double tangent(double angle);
double natural_log(double value);
double log_base10(double value);
double power(double base, double exponent);
long long factorial(int n);
//function calling
int main() {
    int choice;
    double num1, num2;
    int num;
    
    do {
        std::cout << "\nScientific Calculator\n";
        std::cout << "1. Addition\n";
        std::cout << "2. Subtraction\n";
        std::cout << "3. Multiplication\n";
        std::cout << "4. Division\n";
        std::cout << "5. Sine\n";
        std::cout << "6. Cosine\n";
        std::cout << "7. Tangent\n";
        std::cout << "8. Natural Logarithm (ln)\n";
        std::cout << "9. Logarithm base 10 (log10)\n";
        std::cout << "10. Exponentiation\n";
        std::cout << "11. Factorial\n";
        std::cout << "0. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch(choice) {
            case 1:
                std::cout << "Enter two numbers: ";
                std::cin >> num1 >> num2;
                std::cout << "Result: " << add(num1, num2) << std::endl;
                break;
            case 2:
                std::cout << "Enter two numbers: ";
                std::cin >> num1 >> num2;
                std::cout << "Result: " << subtract(num1, num2) << std::endl;
                break;
            case 3:
                std::cout << "Enter two numbers: ";
                std::cin >> num1 >> num2;
                std::cout << "Result: " << multiply(num1, num2) << std::endl;
                break;
            case 4:
                std::cout << "Enter two numbers: ";
                std::cin >> num1 >> num2;
                std::cout << "Result: " << divide(num1, num2) << std::endl;
                break;
            case 5:
                std::cout << "Enter angle in radians: ";
                std::cin >> num1;
                std::cout << "Result: " << sine(num1) << std::endl;
                break;
            case 6:
                std::cout << "Enter angle in radians: ";
                std::cin >> num1;
                std::cout << "Result: " << cosine(num1) << std::endl;
                break;
            case 7:
                std::cout << "Enter angle in radians: ";
                std::cin >> num1;
                std::cout << "Result: " << tangent(num1) << std::endl;
                break;
            case 8:
                std::cout << "Enter a number: ";
                std::cin >> num1;
                std::cout << "Result: " << natural_log(num1) << std::endl;
                break;
            case 9:
                std::cout << "Enter a number: ";
                std::cin >> num1;
                std::cout << "Result: " << log_base10(num1) << std::endl;
                break;
            case 10:
                std::cout << "Enter base and exponent: ";
                std::cin >> num1 >> num2;
                std::cout << "Result: " << power(num1, num2) << std::endl;
                break;
            case 11:
                std::cout << "Enter an integer: ";
                std::cin >> num;
                std::cout << "Result: " << factorial(num) << std::endl;
                break;
            case 0:
                std::cout << "Exiting...\n";
                break;
            default:
                std::cout << "Invalid choice!\n";
        }
    } while (choice != 0);

    return 0;
}

// Function definitions
double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b == 0) {
        std::cout << "Error: division is not possible.";
        
    }
    return a / b;
}

double sine(double angle) {
    return sin(angle);
}

double cosine(double angle) {
    return cos(angle);
}

double tangent(double angle) {
    return tan(angle);
}

double natural_log(double value) {
    if (value <= 0) {
        std::cout << "Error:";
        return NAN;
    }
    return log(value);
}

double log_base10(double value) {
    if (value <= 0) {
        std::cout << "Error: Logarithm base 10 undefined for non-positive values!";
           }
    return log10(value);
}

double power(double base, double exponent) {
    return pow(base, exponent);
}

long long factorial(int n) {
    if (n < 0) {
        std::cout << "Error: ";
        return -1;
    }
    long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

