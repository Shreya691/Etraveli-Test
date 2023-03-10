#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int maximumProfit(vector<int>& prices){
    int maxx = 0;

    for(int i = 0 ; i < prices.size() ; i++){
        int temp = 0;
        for(int j = i+1; j < prices.size() ; j++){
            if(prices[j] > prices[i]){
                temp = prices[j] - prices[i];
            }
        }
        maxx = max(temp,maxx);
        temp = 0;
    }
    return maxx;
}

int main(){
    vector<int> prices = {2,3,4,1,6,7};
    int ans = maximumProfit(prices);
    if(ans == 0){
        cout<<"No Profit";
    }
    cout<<"The maximum profit gained is "<<ans;
    return 0;
}