#include <iostream>
using namespace std;

void printDivisors(int num) {
    cout << "Divisors of " << num << " are: ";
    for(int i = 1; i <= num; i++) {
        if(num % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int num1, num2;
    
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    
    cout << "\nResults:" << endl;
    cout << "Sum: " << num1 + num2 << endl;
    cout << "Difference: " << num1 - num2 << endl;
    cout << "Product: " << num1 * num2 << endl;
    
    printDivisors(num1);
    
    return 0;
}