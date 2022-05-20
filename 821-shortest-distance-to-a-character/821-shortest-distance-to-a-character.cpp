class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n = s.size();
        int pos = -n;
        vector<int> v(n,n);
        for(int i = 0;i<n;i++){
            if(s[i]==c) pos= i;
            v[i] = i-pos;
        }
        for(int i = pos-1;i>=0;--i){
            if(s[i]==c) pos =i;
            v[i] = min(pos - i,v[i]);
        }
        return v;
    }
};