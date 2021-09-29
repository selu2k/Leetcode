class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n == 0 ){return 0 ;}
        int x = nums[0];
        int j = 1;
        for(int i = 1 ; i < n ; i++){
            if( x != nums[i]){
                nums[j] = nums[i];
                x = nums[i];
                j += 1 ;
            }
        }
        return j;
    }
};