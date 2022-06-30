class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        // int maxfreq=0;
        // int element=0;
        // unordered_map<int,int> map;
        // for(auto i : nums){
        //     map[i]++;
        //     if(maxfreq<map[i]){
        //         maxfreq = map[i];
        //         element = map[i];
        //     }
        // }
        int n = nums.size();
        int ans=0;
        int mid = n/2;
        int target = nums[mid];
        for(auto i:nums){
            ans += abs(target-i);
        }
        return ans;
        
    }
};