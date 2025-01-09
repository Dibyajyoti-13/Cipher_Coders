#include <iostream>
#include <cstring>
using namespace std;

string longestCommonPrefix(string strs[], int n) {    
    string prefix = strs[0];
    for (int i = 1; i < n; ++i) {
        int j = 0;
        while (j < prefix.length() && j < strs[i].length() && prefix[j] == strs[i][j]) {
            j++;
        }
        prefix = prefix.substr(0, j);
        if (prefix == "") {
            return "";
        }
    }
    return prefix;
}

int main(){
    int n;
    string arr[10];
    cout << "Enter no. of elements: ";
    cin >> n;
    cout << "Enter strings: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    string result = longestCommonPrefix(arr, n);
    if(result != "")
    cout << "The strings share the prefix \"" << result << "\", which is the longest commmon starting sequence." << endl;
    else cout << "The strings have no letters in common at the beginning, so the result is an empty string." << endl;
}