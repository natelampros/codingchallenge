#include <iostream>
using namespace std;

int Factorial(int num) {
    if (num > 1) { return num * Factorial(num - 1); }
    else { return 1; }
}

int main() {
    int numFactorial;

    cin >> numFactorial;

    cout << "answer of " << numFactorial << endl;

    int num1 = numFactorial;
    while (num1 > 0) {

        cout << num1;
        if (num1 > 1) {cout << " * "; }
        else {cout << " = "; }
        --num1;
    }

    cout << Factorial(numFactorial);
    return 0;
}
