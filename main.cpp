#include <iostream>
#include <string>

using namespace std;

string SwapLetters (string word);


int main() {
    string word;

    cin >> word;

    cout << SwapLetters(word);
}

string SwapLetters (string word) {
    string swappedword = "";
    for (int i = word.length() - 1; i >= 0; --i) {
        swappedword.push_back(word.at(i));
    }
    return swappedword;
}