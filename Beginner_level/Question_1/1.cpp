#include <iostream>
using namespace std;

void concatenateStrings() {
    string str1, str2;
    cout << "Enter the first string: ";
    cin >> str1;
    cout << "Enter the second string: ";
    cin >> str2;
    cout << "Concatenated string: " << str1 + str2 << endl;
}

int main() {
    concatenateStrings();
    return 0;
}