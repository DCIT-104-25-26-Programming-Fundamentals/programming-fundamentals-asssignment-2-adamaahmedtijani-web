
#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

bool isFibonacci(int num) {
    if (num < 0) {
        return false;
    }
    
    int a = 0;
    int b = 1;
    
    if (num == a || num == b) {
        return true;
    }
    
    while (b < num) {
        int next = a + b;
        a = b;
        b = next;
    }
    
    return (b == num);
}

void printFibonacciSequence(int n) {
    if (n <= 0) {
        cout << "Error: N must be a positive integer." << endl;
        return;
    }
    
    int a = 0;
    int b = 1;
    
    for (int i = 0; i < n; i++) {
        cout << a;
        
        if (i < n - 1) {
            cout << " ";
        }
        
        int next = a + b;
        a = b;
        b = next;
    }
    cout << endl;
}

void checkFibonacciNumber(int num) {
    if (isFibonacci(num)) {
        cout << num << " is a Fibonacci number." << endl;
    } else {
        cout << num << " is NOT a Fibonacci number." << endl;
    }
}

int main() {
    cout << "PART A - Print the First N Terms" << endl;
    
    int n;
    cout << "How many terms? ";
    cin >> n;
    
    printFibonacciSequence(n);
    
    cout << endl;
    
    cout << "PART B - Check if a Number Belongs to the Sequence" << endl;
    
    int numToCheck;
    cout << "Enter a number to check: ";
    cin >> numToCheck;
    
    checkFibonacciNumber(numToCheck);
    
    return 0;
}