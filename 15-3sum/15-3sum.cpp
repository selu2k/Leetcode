class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    //     int n = nums.size();
    //     vector<vector<int>> res;
    //     for(int i = 0 ;i<n;i++){
    //         int fix = nums[i];
    //         int target = fix*(-1);
    //         vector<int> temp = twoSum(nums,target,i+1);
    //         if(temp.size()!= 0){
    //             temp.push_back(fix);
    //             res.push_back(temp);
    //         }
    //     }
    //     return res;
    // }
    // vector<int> twoSum(vector<int>& nums, int target,int x) {
    //     unordered_map<int, int> hash;
    // vector<int> result;
    //     for(int i=x; i<nums.size() ; i++){
    //         int tofind = target - nums[i];
    //         if(hash.find(tofind) != hash.end()){
    //                 result.push_back(tofind);
    //                 result.push_back(nums[i]);
    //                 return result;
    //         }
    //         hash[nums[i]] = i;
    //     }
    //     return result;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>> res;
        for(int i=0;i<n-2;i++){
               if(i>0 && (nums[i]==nums[i-1]) )continue;
               int l=i+1, r= n-1;
               while(l<r){
                   int sum =nums[i]+nums[l]+nums[r];
                   
                   if(sum<0) l++;
                   else if(sum>0)r--;
                   else {
                       res.push_back(vector<int>{nums[i],nums[l],nums[r]});
                       while(l+1<r && nums[l]==nums[l+1])l++;
                       while(l<r-1 && nums[r]==nums[r-1]) r--;
                       l++; r--;
                   }
               }
        }
       
        return res;
    }
};