class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int Max = amount + 1;
        vector<int> dp(amount + 1, Max);
        dp[0] = 0;
        for (int i = 1; i <= amount; i++) {
            for (int j = 0; j < coins.size(); j++) {
                if (coins[j] <= i) {
                    dp[i] = min(dp[i], dp[i - coins[j]] + 1);
                }
            }
        }
        return dp[amount] > amount ? -1 : dp[amount];
    }
};
// class Solution {
// public:
    
//     int coinChange(vector<int>& coins, int amount) {
        
//         //Edge Cases
//         if(amount==0) return 0;
//         if(coins.size()==0) return -1;
        
//         //We start with small denominations and then we use that information for bigger coins
//         sort(coins.begin(),coins.end());
        
//         //Edge Case :Remove 0 (It will not make any denomination)
//         coins.erase(std::remove(coins.begin(), coins.end(), 0), coins.end());

        
//         int n=coins.size();
//         vector<vector<int> > dp(n,vector<int>(amount+1,0));
        
//         //Filling the first column=0
//         for(int i=0;i<n;i++)
//             dp[i][0] = 0;
        
//         //Filling the row with the first coin
//         for(int j=1;j<=amount;j++)
//             dp[0][j] = coins[0]<=j ? 1 + checkMinus1(dp[0][j - coins[0]]) : -1;
        
//         //Filling the rest of rows
//         for(int i=1;i<n;i++)
//         {
//             for(int j=1;j<=amount;j++)
//             {
//                 if(coins[i]<=j)
//                 {
//                     int curr = 1 + checkMinus1(dp[i][j-coins[i]]);
//                     int prev = dp[i-1][j];
//                     dp[i][j] = curr==-1 ? prev :
//                                prev==-1 ? curr :
//                                min(curr,prev); 
//                 }
                    
//                 else
//                     dp[i][j] = dp[i-1][j];
                    
//             }
//         }
        
//         return dp[n-1][amount];
        
//     }
    
//     inline int checkMinus1(int& num){
//         //If its minus 1, we want the value of dp[i][j] to be -1. Hence we return -2 here.
//         return num==-1 ? -2 : num;
//     }
// };