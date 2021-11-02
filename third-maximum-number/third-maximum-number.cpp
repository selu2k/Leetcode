class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n = nums.size();
        long long max1 = LLONG_MIN,max2=LLONG_MIN,max3=LLONG_MIN;
        if(n==1){return nums[0];}
        if(n==2){if(nums[1]>nums[0]){return nums[1];}else{return nums[0];}}
        // if(nums[1]>nums[0]){
        //     if(nums[2]>nums[1]){max1=nums[2];max2=nums[1];max3=nums[0];}
        //     else{max1=nums[1];max2=nums[2];max3=nums[0];}
        // }
        bool flag = false;
        for(int i = 0 ; i<n ; i++){
            if(nums[i]>max1){
                max3=max2;
                max2=max1;
                max1=nums[i];
            }
            else if(nums[i]>max2 && nums[i]<max1){
                max3 = max2;
                max2 = nums[i];
            }
            else if(nums[i]>max3 && nums[i]<max2){max3 = nums[i];
            }
        }
        if(max3!= LLONG_MIN){return max3;}
        return max1;
    }
};