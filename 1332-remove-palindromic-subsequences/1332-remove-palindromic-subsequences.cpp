class Solution {
public:
    int removePalindromeSub(string s) {
        auto ss = s;
        reverse(ss.begin(),ss.end());
        if(ss == s) return 1;
        return 2;
    }
};