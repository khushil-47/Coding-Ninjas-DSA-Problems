int bestTimeToBuyAndSellStock(vector<int>&prices) {
  int mini = prices[0];
  int max_Profit = 0;
for(int i = 1; i<prices.size(); i++){

int curr_profit = prices[i]- mini;
  max_Profit = max(max_Profit, curr_profit);
  mini = min(prices[i], mini);



}
  return max_Profit;
}
