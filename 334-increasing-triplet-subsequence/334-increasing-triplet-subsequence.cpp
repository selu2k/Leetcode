class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        // int n = nums.size();
        // if(n<3) return false;
        int a = INT_MAX; // first integer
        int b = INT_MAX; // second integer
        for(auto i:nums){ // trying to keep the values minimum
            if(i<=a) a=i; // updating first // equality is important to eliminate repeat
            else if(i<=b) b = i; // updating second
            else return true; // third or c id found return true;
        }
        return false;
    }
};