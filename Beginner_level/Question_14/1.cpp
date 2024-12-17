#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool isPalindrome(string s) {
    string filtered;
    
    for (char c : s) {
        if (isalnum(c)) {
            filtered.push_back(tolower(c));
        }
    }

    int left = 0, right = filtered.size() - 1;
    while (left < right) {
        if (filtered[left] != filtered[right]) {
            return false;
        }
        left++;
        right--;
    }

    return true;
}

int main() {
    string input;
    
    cout << "Enter a phrase: ";
    getline(cin, input);  
    
    cout << boolalpha << isPalindrome(input) << endl; 
    
    return 0;
}
