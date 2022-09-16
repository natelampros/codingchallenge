#include <iostream>
using namespace std;

int CalculateMax (int num1, int num2, int num3) {
    int maxInt = num1;
    if (maxInt < num2) { maxInt = num2; }
    if (maxInt < num3) { maxInt = num3; }

    return maxInt;
}

int main() {
    int one, two, three;

    cin >> one >> two >> three;

    cout << "int 1: " << one << endl;
    cout << "int 2: " << two << endl;
    cout << "int 3: " << three << endl;

    cout << "Max int is: ";
    
    cout << CalculateMax(one, two, three) << endl;
}
