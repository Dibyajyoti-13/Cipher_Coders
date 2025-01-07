#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int k_runnerup(vector<int> time, int k)
{
    priority_queue<int> q;
    for (auto t : time)
    {
        q.push(t);
        if (q.size() > k)
            q.pop();
    }
    return q.top();
}

int main()
{
    vector<int> arr;
    int n, a;
    cout << "Enter array size: ";
    cin >> n;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        arr.push_back(a);
    }
    cout << "Enter k: ";
    cin >> a;
    cout << "The " << a << "th runner up took " << k_runnerup(arr, a) << " minutes." << endl;
}