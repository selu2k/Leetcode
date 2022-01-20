class Solution {
public:
    void sortColors(vector<int>& nums) {
        int start = 0;
        int last = nums.size()-1;
        for(int i = 0 ; i<=last;i++){
            if(nums[i]==0 &&i>start){
                swap(nums[start],nums[i]);
                i--;
                start++;
            }
            else if(nums[i]==2 && i<last){
                swap(nums[i],nums[last]);
                last--;
                i--;
            }
        }
    }
};