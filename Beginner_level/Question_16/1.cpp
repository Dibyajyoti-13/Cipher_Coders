#include <iostream>
#include <stack>
#include <string>
using namespace std;
bool bracketValidator(const string s){
    stack<char> stack;
    for (int i = 0; i < s.size(); i++){
        if (s[i] == '(' || s[i] == '{' || s[i] == '['){
            stack.push(s[i]);
        }
        else{
            if (stack.empty()) return false;
            char c = stack.top();
            stack.pop();
            if ((s[i] == ')' && c == '(') || (s[i] == ']' && c == '[') || (s[i] == '}' && c == '{')){
                continue;
            }
            else return false;
        }
    }
    return stack.empty();
}
int main()
{
    string s;
    cout << "Enter a string of brackets: ";
    getline(cin, s);
    if (bracketValidator(s))
    {
        cout << "Correct" << endl;
    }
    else
    {
        cout << "Incorrect" << endl;
    }
    return 0;
}