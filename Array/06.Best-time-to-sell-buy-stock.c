/*You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.*/


//Runtime 89ms beats 90.45% using 15.35MB beats 6.46%;


int maxProfit(int* prices, int pricesSize) {
      int mn = INT_MAX;
    int ans = 0;
    
    for (int i = 0; i < pricesSize; i++) {
        if (prices[i] < mn) {
            mn = prices[i];
        }
        if (prices[i] - mn > ans) {
            ans = prices[i] - mn;
        }
    }
    
    return ans;

    
}