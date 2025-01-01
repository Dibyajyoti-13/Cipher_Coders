#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> arr;
    int m, n;
    cout << "Enter no of packets: ";
    cin >> n;
    cout << "Enter chocolates in each packets: ";
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        arr.push_back(a);
    }
    cout << "Enter number of students: ";
    cin >> m;
    if(m > n){
        cout << "Packets less than students!" << endl;
        return 0;
    }
    int min_diff = INT16_MAX, i = 0;
    while(i <= n - m){
        vector<int> subarray(arr.begin() + i, arr.begin() + i + m);
        sort(subarray.begin(), subarray.end());
        int a = subarray[m - 1] - subarray[0];
        min_diff = (min_diff > a)? a : min_diff;
        i++;
    }
    cout << "Min diff " << min_diff << endl;
    return 0;
}