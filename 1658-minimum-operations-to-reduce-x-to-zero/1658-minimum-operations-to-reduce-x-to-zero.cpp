class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int sum = accumulate(begin(nums), end(nums), 0); // redo this ques..
        // hint : sliding window
        int l = 0, r = 0, res = INT_MAX, sz = nums.size();
        while (l <= r)
            if (sum >= x) {
                if (sum == x)
                res = min(res, l + sz - r);
                if (r < sz)
                    sum -= nums[r++];
                else
                    break;
            }
            else
                sum += nums[l++];
        return res == INT_MAX ? -1 : res;
    }
};