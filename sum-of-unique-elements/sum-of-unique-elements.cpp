class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> um;
        for(auto i : nums){
            um[i]++;
        }
        int sum=0;
        for(auto i : um){
            if(i.second == 1){
                sum+=i.first;
            }
        }
        return sum;
    }
};