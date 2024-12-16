#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

string containsDuplicate(vector<int>& nums) {
    unordered_set<int> seen;
    for (int num : nums) {
        if (seen.find(num) != seen.end()) {
            return "true";
        }
        seen.insert(num);
    }
    return "false";
}

int main() {
    int n;
    vector<int> arr;
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter array: ";
    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    cout << containsDuplicate(arr) << endl;
    return 0;
}
