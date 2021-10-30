class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = s.size();
        int j =-1;
        for(int i = 0 ; i<n ; i++){
            j = t.find(s[i],j+1);
            if(j==string::npos){
                return false;
            }
        }
        return true;
    }
};