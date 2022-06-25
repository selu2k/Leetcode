class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int n = nums.size();
        if(n<3) return true;
        bool flag = false;
        for(int i = 1 ; i < n ; i++ ){
            if( nums [i] < nums[i-1]){
                if(!flag){
                    flag = true;
                    if(i!=1){
                        if(nums[i]<nums[i-2]){
                            nums[i] = nums[i-1];
                        }
                        else{
                            nums[i-1] = nums[i-2];
                        }
                    }
                }
                else{
                    return false;
                }
            }
        }
        return true;
    }
};