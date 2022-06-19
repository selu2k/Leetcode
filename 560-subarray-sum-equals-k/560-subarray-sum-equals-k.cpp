class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int> map;
        // main idea is to calculate the comulative sum till each element and increase the map for that com value , now at each iteration we check if com-k exists in the map , if it exists then we increase the count.
        int comu = 0;
        int count=0;
        map[0]++;
        for(int i =0 ; i<nums.size() ; i++){
            comu += nums[i];
            count+= map[comu - k];
            map[comu]++;
        }
        return count;
    }
};