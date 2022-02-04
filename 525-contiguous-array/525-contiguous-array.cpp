// class Solution {
// public:
//     int findMaxLength(vector<int>& nums) {
// 		// int maxlen = 0;
// 		// for (int i = 0; i < nums.size(); i++) {
// 		// int zeroes = 0, ones = 0;
// 		// for (int j = i; j < nums.size(); j++) {
// 		// if (nums[j] == 0) {
// 		// zeroes++;
// 		// } else {
// 		// ones++;
// 		// }
// 		// if (zeroes == ones) {
// 		// maxlen = max(maxlen, j - i + 1);
// 		// }
// 		// }
// 		// }
// 		// return maxlen;
//     }
// };
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int sum=0, maxLen=0;
        unordered_map<int, int> seen{{0, -1}};
        
        for(int i=0; i<nums.size(); i++){
            sum += nums[i]==1 ? 1 : -1;
            if(seen.count(sum)) maxLen = max(maxLen, i-seen[sum]);
            else seen[sum] = i;
        }
        return maxLen;
    }
};