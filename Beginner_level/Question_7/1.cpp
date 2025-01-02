#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxProfit(vector<int> prices) {
    int minPrice = prices[0];
    int maxProfit = 0;
    for (int i = 1; i < prices.size(); ++i) {
        minPrice = min(minPrice, prices[i]);
        maxProfit = max(maxProfit, prices[i] - minPrice);
    }
    
    return maxProfit;
}

int main(){
    int n,a;
    vector<int> arr;
    cout<<"Enter array size: ";
    cin>>n;
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>a;
        arr.push_back(a);
    }
    int Profit=maxProfit(arr);
    cout<<"Max Profit: "<<Profit;
}