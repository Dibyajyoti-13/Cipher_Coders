#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

void search()
{
    int n, target;
    cout<<"Enter size of array and target: ";
    cin >> n >> target;
    vector<int> durations(n);
    cout<<"Enter durations: ";
    for (int i = 0; i < n; ++i)
    {
        cin >> durations[i];
    }
    unordered_set<int> seen;
    bool found = false;
    for (int duration : durations)
    {
        if (seen.count(target - duration))
        {
            found = true;
            break;
        }
        seen.insert(duration);
    }
    cout << (found ? "Yes" : "No") << endl;
}
int main()
{
    int T;
    cout << "Enter no. of testcases: ";
    cin >> T;
    while (T--)
    {
        search();
    }
    return 0;
}