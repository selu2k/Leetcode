class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int count = 0; 
        
        for(int i = 0; i<nums.size() ; i++)
        {
            for(int j = 0 ; j<nums.size() ; j++)
            {
                if(nums[i]<nums[j] && (nums[j] - nums[i]) == k){
                    count++;
                }
            }
        }
        return count;
    }
};