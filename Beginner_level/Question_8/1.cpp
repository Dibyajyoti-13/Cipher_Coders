#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, it, i = 0, k;
    vector<int> q;
    cout << "Enter array size: ";
    cin >> n;
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        q.push_back(a);
    }
    cout << "Enter k: ";
    cin >> k;
    if(k > n){
        cout << "k value too large for the given array size!!" << endl;
        return 1;
    }
    do{
        it = 0;
        for(int j = 0; j < n; j++){
            if(q[it] < q[j]){
                it = j;
            }
        }
        q.erase(q.begin() + it);
        n--;
        i++;
    }while(k - i > 0);

    if(k == 1) cout <<"1st largest number: " << q[it] << endl; 
    else if(k == 2) cout <<"2nd largest number: " << q[it] << endl;
    else cout << k <<"th largest number: " << q[it] << endl;
    return 0;
}

//this code won't work for duplicate values
