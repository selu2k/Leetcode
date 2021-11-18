class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> res;
        int n = nums.size();
        vector<int> s(n+1,0);
        for(int i:nums){
            s[i]++;
        }
        
        for(int i = 1 ;i<=n;i++){
            if(s[i]==0){
                res.push_back(i);
            }
        }
        
        return res;
    }
};