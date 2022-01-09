class Solution {
public:
    bool canConstruct(string rn, string m) {
        int n = m.size();
        int n2 = rn.size();
        if(n<n2){return false;}
        vector<char> v;
        for(int i =0 ; i<n ; i++){
            v.push_back(m[i]);
        }
        std::vector<char>::iterator it;
        for(int i = 0 ; i<n2;i++){
            it = find(v.begin(),v.end(),rn[i]);
            if(it != v.end()){
                v.erase(it);
            }
            else{return false;}
        }
        return true;
    }
};