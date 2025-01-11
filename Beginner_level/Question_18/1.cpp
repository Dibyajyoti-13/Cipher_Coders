#include<iostream>
#include<cstring>
using namespace std;

string unique(string input){
    string unique = "", result = "";
    for(int i = 0; i < input.size(); i++){
        for(int j = i; j<input.size(); j++){
            char ch = input[j];
            if(unique.find(ch) == string::npos){
                unique+=ch;
            }
            else{
                break;
            }
        }
        if(unique.size() > result.size()){
            result = unique;
            unique = "";
        }
    }
    return result;
}

int main(){
    string input;
    cout << "Enter string: ";
    cin >> input;
    string result = unique(input);
    cout << "Longest unique string: " << result << endl;
    return 0;
}