#include <iostream>
using namespace std;

int main(){
    int arr[10], n, max, min;
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int i;
    if(n % 2 == 0){
        if( arr[0] > arr[1]){
            max = arr[0];
            min = arr[1];
        }
        else{
            min = arr[0];
            max = arr[1];
        }
        i = 2;
    }
    else{
        min = arr[0];
        max = arr[0];
        i = 1;
    }
    while(i < n - 1){
        if(arr[i] > arr[i+1]){
            max = (max > arr[i])? max : arr[i];
            min = (min < arr[i+1])? min : arr[i+1];
        }
        else{
            max = (max > arr[i+1])? max : arr[i+1];
            min = (min < arr[i])? min : arr[i];
        }
        i = i + 2;
    }
    cout << "Minimum number: " << min << endl;
    cout << "Maximum number: " << max << endl;
    return 0;
}