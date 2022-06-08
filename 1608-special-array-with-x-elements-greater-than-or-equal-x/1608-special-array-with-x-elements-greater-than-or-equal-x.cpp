class Solution {
public:
    int specialArray(vector<int>& nums) {
        int l = 0;
        int r = nums.size();
        int mid;
        while(l<=r){
            mid = l + (r-l)/2;
            int n =0;
            for(int i= 0 ; i<nums.size();i++){
                if(nums[i]>=mid) n++;
                //if(n>mid) break;
            }
            if( n > mid) l = mid+1;
            else if( n < mid) r = mid -1;
            else return mid;
        }
        return -1;
    }
};