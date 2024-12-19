#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cout << "Enter size: ";
    cin >> n;
    vector<int> a1;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++){
        int a;
        cin >> a;
        a1.push_back(a);
    }
    for(int i = 0; i < n/2; i++){
        swap(a1[i], a1[n-1-i]);
    }

    for(int i : a1){
        cout << i << " ";
    }
    return 0;
}
