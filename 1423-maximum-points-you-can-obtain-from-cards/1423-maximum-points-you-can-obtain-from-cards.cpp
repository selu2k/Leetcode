class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        //sliding window of size n-k to find minimum subarray
        int n = nums.size();
        
        int sum = 0 ;
        int total=0;
        int ans=0;
        for(auto i:nums){
            total += i;
        }
        if(n==k) return total;
        for(int i = 0 ; i< n-k ;i++){
            sum += nums[i];
        }
        ans = sum;
        for(int i = n-k ; i < n ; i++ ){
            sum = sum - nums[i-n+k];
            sum += nums[i];
            ans = min(ans,sum);
        }
        return total -ans ;
    }
};