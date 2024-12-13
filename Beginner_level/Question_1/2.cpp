#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> grades(5);
    double sum = 0;
    for(int i = 0; i < 5; i++) {
        cout << "Enter grade " << i+1 << ": ";
        cin >> grades[i];
        sum += grades[i];
    }
    double average = sum / 5.0;
    cout << "The average grade is: " << average << endl;
    return 0;
}
