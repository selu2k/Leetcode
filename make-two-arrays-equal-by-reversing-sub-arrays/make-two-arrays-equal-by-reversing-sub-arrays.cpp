class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        unordered_multiset<int> t(target.begin(),target.end());
        unordered_multiset<int> a(arr.begin(),arr.end());
        if(t==a){return true;}
        return false;
    }
};