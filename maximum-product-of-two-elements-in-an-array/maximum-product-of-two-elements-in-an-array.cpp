class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        // int mul,res=0;
        // for(int i =1;i<nums.size();i++){
        //     mul = (nums[i]-1)*(nums[i-1]-1);
        //     res = max(mul,res);
        // }
        return (nums[n-1]-1)*(nums[n-2]-1);
        
    }
};