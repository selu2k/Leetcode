class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n = nums.size();
        for(int i =0 ; i<n ; i++){
            int left = 0 ;
            int right = 0;
            int j = 0;
            while(j<i){
                left += nums[j];
                j++;
            }
            int k = n-1;
            while(k>i){
                right += nums[k];
                k--;
            }
            if(left == right){return i;}
        }
        return -1;
    }
};