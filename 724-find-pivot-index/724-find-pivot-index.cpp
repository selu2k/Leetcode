class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> com = nums;
        com.push_back(nums[0]);
        if(nums.size()==1){
            if(nums[0]==0) return 0;
            return -1;
        }
        for(int i = 1; i< nums.size();i++){
            nums[i] +=nums[i-1];
        }
        for(int i=0; i< nums.size();i++){
            int left =0;
            int right = 0;
            left = nums[i] - com[i];
            right = nums[nums.size()-1]-nums[i];
            if(left == right) return i;
        }
        return -1;
    }
};