class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int summ = accumulate(nums.begin(),nums.end(),0);
        int leftsum = 0 ;
        for(int i = 0 ; i<n ; i++){
            summ = summ - nums[i];
            if(leftsum == summ){
                return i;
            }else{
                leftsum += nums[i];
            }
            
        }
        return -1;
    }
};