class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        if(n==1){return nums;}
        if(n==2){
            if(nums[0]==nums[1]){return vector<int>{nums[0],nums[1]};}else{return vector<int>               {nums[1]};}}
        int sum= nums[n-1] ;
        int t =0;
        for(int i = 0 ; i<n-1;i++){
            t+=nums[i];
        }
        int i = 2;
        while(t>=sum){
            sum+=nums[n-i];
            t-=nums[n-i];
            i++;
        }
        vector<int> v;
        if(i==2){return vector<int>{nums[n-1]};}
        for(int j = n-1 ; j!=n-i ;j--){
            v.push_back(nums[j]);
        }
        return v;
    }
};