class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        unordered_set<int> s;
        int i = 0,j=0,ans=0;
        while(i<n && j<n){
            if(s.find(nums[j]) == s.end()){
                sum = sum + nums[j];
                s.insert(nums[j++]);
            }
            else{
                s.erase(nums[i]);
                ans = max(ans,sum);
                sum = sum - nums[i++];
            }
        }
        ans = max(ans,sum);
        return ans;
    }
};