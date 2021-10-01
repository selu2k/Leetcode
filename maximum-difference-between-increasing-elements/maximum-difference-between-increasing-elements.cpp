class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n = nums.size();
        int maxx = -1;
        for(int i = 0 ; i< n ; i++){
            for(int j = i+1 ; j<n;j++){
            if(nums[j]>nums[i]){
                maxx = max(maxx,nums[j]-nums[i]);
                //maxx = maxx>(nums[j]-nums[i])?maxx:nums[j]-nums[i];
            }
        }}
        return maxx;
    }
};