class Solution {
public:
    int singleNumber(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         for(int i = 0 ; i<nums.size()-1;i=i+2){
//             if(nums[i]!=nums[i+1]){
//                 return nums[i];
//             }
//         }
        
//         return nums[nums.size()-1];
        int n=0;
        for(auto i : nums) n = n^i;
        return n;
    }
};