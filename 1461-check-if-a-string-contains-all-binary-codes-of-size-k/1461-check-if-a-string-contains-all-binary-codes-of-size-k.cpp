class Solution {
public:
    bool hasAllCodes(string s, int k) {
        unordered_set<string> set;
        int n = s.size();
        
        for(int i=0;i<n-k+1;i++){
            set.insert(s.substr(i,k));
        }
        if(set.size()==pow(2,k)) return true;
        return false;
    }
};