class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        map<int,int>m;
        int n = nums.size();
        vector<int> sorted = nums;
        sort(sorted.begin(),sorted.end());
        // vector<int> v;
        // for(int i = 0 ; i<n ; i++){
        //     v.push_back(i);
        // }
        
        for(int i = 0 ;i<n;i++){
            m.insert({sorted[i],i});
        }
        for(int i = 0 ; i<n ;i++){
            nums[i] = m[nums[i]];
        }
        return nums;
    }
};