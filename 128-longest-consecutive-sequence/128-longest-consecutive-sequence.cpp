class Solution {
public:
    int longestConsecutive(vector<int>& num) {
        
        
        set<int> nums(num.begin(),num.end());
        vector<int> nu(nums.begin(),nums.end());
        int ans=1;
        int n = nums.size();
        if(n==1) return 1;
        if(n==0) return 0;
        sort(nu.begin(),nu.end());
        int cur=1;
        for(int i = 1 ; i<n ; i++){
            if(nu[i] == nu[i-1]+1){
                cur++;
                ans = max(ans,cur);
            }
            else{
                cur = 1;
            }
        }
        return ans;
    }
};