class Solution {
public:
    int specialArray(vector<int>& nums) {
        int n  = nums.size();
        int x=0;
        for(int i =1 ; i<=n;i++){
            for(int j = 0 ;j <n ; j++){
                if(nums[j]>=i){
                    x++;
                    if(x>i){
                        x=0;
                        break;
                    }
                }
            }
            if(x==i){
                return i;
            }
            x=0;
        }
        return -1;
    }
};