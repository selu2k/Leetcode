class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int total = 1;
        vector<int> res(nums.size(),0);
        for(auto i: nums){
            total *=i;
        }
        if(total != 0){
            for(int i = 0; i<nums.size(); i++){
                nums[i] = total/nums[i];
            }
        }
        else{
            for(int i =0 ; i < nums.size() ; i++){
                if(nums[i]!=0) res[i] = 0;
                else{
                    total=1;
                    for(int j =0 ; j<nums.size() ; j++){
                        if(i!=j) total *= nums[j];
                    }
                    res[i] = total;
                }
            }
            return res;
        }
        return nums;
    }
};