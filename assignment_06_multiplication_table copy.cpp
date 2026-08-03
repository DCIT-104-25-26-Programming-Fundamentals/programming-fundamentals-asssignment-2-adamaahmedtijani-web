
#include <iostream>
#include <iomanip>
using namespace std;

void printSingleTable(int num) {
    cout << "Multiplication Table for " << num << ":" << endl;
    
    for (int i = 1; i <= 12; i++) {
        cout << num << " x " << i << " = " << (num * i) << endl;
    }
}

void printMultipleTables(int n) {
    if (n <= 0) {
        cout << "Error: N must be a positive integer." << endl;
        return;
    }
    
    for (int num = 1; num <= n; num++) {
        cout << "Multiplication Table for " << num << ":" << endl;
        
        for (int i = 1; i <= 12; i++) {
            cout << num << " x " << i << " = " << (num * i) << endl;
        }
        
        if (num < n) {
            cout << "---" << endl;
        }
    }
}

int main() {
    cout << "PART A - Single Table" << endl;
    
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    printSingleTable(num);
    
    cout << endl;
    
    cout << "PART B - Bonus: Tables from 1 to N" << endl;
    
    int n;
    cout << "How many tables? ";
    cin >> n;
    
    printMultipleTables(n);
    
    return 0;
}

