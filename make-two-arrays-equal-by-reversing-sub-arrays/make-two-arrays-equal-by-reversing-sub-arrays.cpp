class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        // unordered_multiset<int> t(target.begin(),target.end());
        // unordered_multiset<int> a(arr.begin(),arr.end());
        sort(target.begin(),target.end());
        sort(arr.begin(),arr.end());
        if(target==arr){return true;}
        return false;
    }
};