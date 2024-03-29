class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int minimal = INT_MAX;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<minimal){
                minimal=prices[i];
            }
            if((prices[i]-minimal)>maxProfit){
                maxProfit=prices[i]-minimal;
            }
        }
        return maxProfit;
    }
};
