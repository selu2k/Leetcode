class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        int res =0;
        for(auto i:nums) map[i]++;
        for(auto i : map){
            if(k && map.count(i.first+k)) res++;
            if( !k && i.second>1) res++;
        }
        return res;
    }
};