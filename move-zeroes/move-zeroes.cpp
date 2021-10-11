class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size()!=1){
        for(int i = 0 ; i<nums.size()-1;i++){
            if(nums[i]==0){
                int j = i+1;
                if(j<nums.size()){
                while(nums[j]==0 && j<nums.size()){
                    j++;
                    if(j>=nums.size())break;
                }}if(j<nums.size()){
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;}
                //swap(nums[i],nums[j]);
            }
        }}
    }
};