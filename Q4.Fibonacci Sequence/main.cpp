#include <iostream>
using namespace std;

int CalcFibonacci (int n)  {
    int fibSeq[n];
    fibSeq[0] = 1;
    fibSeq[1] = 1;

    for (int i = 2; i < n; ++i){
        fibSeq[i] = fibSeq[i - 1] + fibSeq[i - 2];
    }
    int answer = fibSeq[n-1];
    return answer;
}

int main() {
    int desiredIndex;

    cin >> desiredIndex;

    cout << "The " << desiredIndex;
    if (desiredIndex == 1){ cout << "st"; }
    else if (desiredIndex == 2){ cout << "nd"; }
    else if (desiredIndex == 3){ cout << "rd"; }
    else { cout << "th"; }

    cout << " term of the Fibonacci Sequence" << " = ";
    cout << CalcFibonacci(desiredIndex);
}
