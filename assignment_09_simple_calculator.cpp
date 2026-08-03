

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void displayMenu() {
    cout << "=============================" << endl;
    cout << "      SIMPLE CALCULATOR" << endl;
    cout << "=============================" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Modulus" << endl;
    cout << "6. Exponentiation" << endl;
    cout << "7. Quit" << endl;
    cout << "Select an operation (1-7): ";
}

void add(double a, double b) {
    cout << fixed << setprecision(2);
    cout << "Result: " << a << " + " << b << " = " << (a + b) << endl;
}

void subtract(double a, double b) {
    cout << fixed << setprecision(2);
    cout << "Result: " << a << " - " << b << " = " << (a - b) << endl;
}

void multiply(double a, double b) {
    cout << fixed << setprecision(2);
    cout << "Result: " << a << " * " << b << " = " << (a * b) << endl;
}

void divide(double a, double b) {
    if (b == 0) {
        cout << "Error: Cannot divide by zero." << endl;
        return;
    }
    
    cout << fixed << setprecision(2);
    cout << "Result: " << a << " / " << b << " = " << (a / b) << endl;
}

void modulus(int a, int b) {
    if (b == 0) {
        cout << "Error: Cannot divide by zero." << endl;
        return;
    }
    
    cout << "Result: " << a << " % " << b << " = " << (a % b) << endl;
}

void exponentiate(double base, int exponent) {
    double result = pow(base, exponent);
    cout << fixed << setprecision(2);
    cout << "Result: " << base << " ^ " << exponent << " = " << result << endl;
}

int main() {
    int choice;
    
    while (true) {
        displayMenu();
        cin >> choice;
        
        if (choice == 7) {
            cout << "Goodbye!" << endl;
            break;
        }
        
        if (choice < 1 || choice > 7) {
            cout << "Error: Invalid choice. Please try again." << endl;
            cout << endl;
            continue;
        }
        
        double num1, num2;
        
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
        
        if (choice == 1) {
            add(num1, num2);
        } else if (choice == 2) {
            subtract(num1, num2);
        } else if (choice == 3) {
            multiply(num1, num2);
        } else if (choice == 4) {
            divide(num1, num2);
        } else if (choice == 5) {
            modulus((int)num1, (int)num2);
        } else if (choice == 6) {
            exponentiate(num1, (int)num2);
        }
        
        cout << endl;
    }
    
    return 0;
}
