class Solution {
public:
    vector<int> dp;
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(auto i : nums){
            sum += i;
        }
        if(sum%2!=0) return false;
        dp.resize(sum+1,-1);
        sort(nums.begin(),nums.end());
        return  helper(nums,0,0,sum/2);
        
        // to divide the array into 2, its sum should be even
        // next we can use dp to check if current sum is possible or not;
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