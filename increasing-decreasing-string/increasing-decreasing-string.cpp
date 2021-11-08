class Solution {
public:
    string sortString(string s) {
        vector<int> v(26,0);
        
        int n = s.size();
        for(auto i : s){
            int idx = (int)i - 97;
            v[idx]++;
        }
        int m = v.size();
        string res="";
        while(true){
            for(int i = 0 ; i<m ; i++){
                if(v[i]!=0){
                    res=res+(char)(i+97);
                    v[i]--;
                }
            }
            for(int i = m-1;i>=0;i--){
                if(v[i]!=0){
                    res = res+(char)(i+97);
                    v[i]--;
                }
            }
            if(res.size()==n){return res;}
        }
        return "Hello";
    }
};