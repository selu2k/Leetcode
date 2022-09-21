class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        int m = queries.size();
        int sum = 0;
        vector<int> res;
        for(auto i : nums){
            if(i%2==0){
                sum += i;
            }
        }
        for(int i = 0 ; i < m ; i++){
            int j = queries[i][1];
            int numm = nums[j];
            if(numm%2==0){
                sum = sum - numm;
                nums[j] += queries[i][0];
                if(nums[j]%2==0){
                    sum+=nums[j];
                }
                res.push_back(sum);
            }
            else{
                nums[j] += queries[i][0];
                if(nums[j]%2==0){
                    sum+=nums[j];
                }
                res.push_back(sum);
            }
        }
        return res;
    }
};