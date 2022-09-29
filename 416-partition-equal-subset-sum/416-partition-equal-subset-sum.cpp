class Solution {
public:
    int8_t dp[10001] = {[0 ... 10000] = -1};
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(auto i : nums){
            sum += i;
        }
        if(sum%2!=0) return false;
        sort(nums.begin(),nums.end());
        bool flag = helper(nums,0,0,sum/2);
        return flag;
        
        
    }
    bool helper(vector<int>nums,int i,int cursum,int tar){
        if( i>=nums.size() || cursum + nums[i] > tar) return false;
        else if( cursum+nums[i] == tar){
            return true;
        }
        if(dp[cursum]!=-1) return dp[cursum];
        return dp[cursum] = helper(nums,i+1,cursum+nums[i],tar) || helper(nums,i+1,cursum,tar);
    }
};