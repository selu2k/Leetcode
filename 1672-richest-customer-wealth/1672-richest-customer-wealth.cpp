class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxx=0;
        int n = accounts.size();
        int m = accounts[0].size();
        for(int i =0 ; i<n ;i++){
            maxx = max(maxx,accumulate(accounts[i].begin(),accounts[i].end(),0));
        }
        return maxx;
    }
};