class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n = indices.size();
        string res="";
        vector<string> v(n);
        for(int i  = 0 ; i<n;i++){
            v[indices[i]] = s[i];
        }
        for(auto i:v){
            res = res+i;
        }
        return res;
    }
};