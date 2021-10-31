class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int maxx = 0 ;
        int n = nums.size();
        if(n == 1){return 1;}
        vector<int> l;
        l.assign(n,1);
        for(int i = 1 ; i<n ;i++){
            for(int j = 0; j<i ; j++){
                if(nums[i]>nums[j]){
                l[i] = max(l[i],l[j]+1);
                }
                maxx = max(l[i],maxx);
            }
        }
        return maxx;
    }
};