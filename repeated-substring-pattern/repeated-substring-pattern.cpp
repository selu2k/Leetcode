class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();
        string two = s+s;
        string temp = two.substr(1,2*n-2);
        if(temp.find(s) != -1){
            return true;
        }
        return false;
    }
};