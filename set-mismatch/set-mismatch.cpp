class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> res(2);
        int n = nums.size();
        if(n==2){
            if(nums[0]==1){
            return vector<int>{1,2};}
            else {return vector<int>{2,1};}}
        sort(nums.begin(),nums.end());
        // bool flag1 = false,flag = true;
        // bool flag2 = true;
        for(int i = 0 ; i<n-1 ; i++){
            if(nums[i] == nums[i+1]){
                res[0] = nums[i];
                break;
                // flag1 = true;
                // flag = false;
            }
            // if(flag == true){
            //     if(i+1 !=nums[i]){
            //         res[1] = i+1;
            //         flag1 = false;
            //         flag2 = false;
            //     }
            // }
            // if(flag1 == true && flag2 == true){
            //     if(i!=nums[i]){
            //         res[1] = i;
            //         break;
            //     }
            // }
        }
        int sum  = 0 ;
        for(int i = 0 ;i< n ;i++){
            sum+=nums[i];
        }
        res[1] = (n*(n+1))/2 - (sum - res[0]);
        return res;
    }
};