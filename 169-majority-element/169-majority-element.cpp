class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count = 1;
        int x = nums[0];
        int n = nums.size();
        double limit = ceil(n/2);
        for(int i = 1; i<n;i++){
            if(nums[i] == x){
                count++;
                if(count>= ceil((float)n/2)){
                    return nums[i];
                }
            }
            else{
                count = 1;
                x = nums[i];
            }
        }
        return nums[0];
    }
};