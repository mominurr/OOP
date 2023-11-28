// programe name : write a program to enter any number and find its factorial using constructor
#include<iostream>
using namespace std;

class Factorial {
    int num;
public:
    Factorial(int n) {
        num = n;
    }

    int calculateFactorial() {
        int fact = 1;
        for (int i = 1; i <= num; i++) {
            fact *= i;
        }
        return fact;
    }
};

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    Factorial obj(number);
    int factorial = obj.calculateFactorial();

    cout << "Factorial of " << number << " is : " << factorial << endl;

    return 0;
}