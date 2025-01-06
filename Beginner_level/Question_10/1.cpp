#include <iostream>
using namespace std;

int max_elevation(int arr[], int n)
{
    int max_curr, max_global;
    max_curr = max_global = arr[0];
    for (int i = 1; i < n; i++)
    {
        max_curr = max(arr[i], max_curr + arr[i]);
        max_global = max(max_curr, max_global);
    }
    return max_global;
}

int main()
{
    int n, arr[20];
    cout << "Enter array size: ";
    cin >> n;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Maximum gain: " << max_elevation(arr, n);
    return 0;
}