class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = INT_MAX;
        int max_profit = 0;

        for(int curr : prices){
            if(curr < min_price){
                min_price = curr;
            }else{
                int curr_profit = curr - min_price;
                if(curr_profit > max_profit){
                    max_profit = curr_profit;
                }
            }
        }
        return max_profit;
    }
};
