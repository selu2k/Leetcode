class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int n = s.size();
        unordered_set<string> set;
        if(n-k+1 < pow(2,k)) return false; // number of iteration < minimum iterations required
        for(int i=0;i<n-k+1;i++){
            set.insert(s.substr(i,k));
        }
        if(set.size()==pow(2,k)) return true;
        return false;
    }
};