#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

bool areAnagrams(string s, string t) {
    if (s.length() != t.length()) {
        return false; 
    }
    
    unordered_map<char, int> freqMap;

    for (char c : s) {
        freqMap[c]++;
    }

    for (char c : t) {
        if (freqMap.find(c) == freqMap.end()) {
            return false;
        }
        freqMap[c]--;
        if (freqMap[c] == 0) {
            freqMap.erase(c);
        }
    }

    return freqMap.empty(); 
}

int main() {
    string s, t;
    
    cout << "Enter the first string: ";
    getline(cin, s);
    
    cout << "Enter the second string: ";
    getline(cin, t);
    
    cout << boolalpha << areAnagrams(s, t) << endl;
    
    return 0;
}
