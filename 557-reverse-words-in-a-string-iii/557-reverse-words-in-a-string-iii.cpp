class Solution {
public:
    string reverseWords(string s) {
        vector<string>v;
        istringstream ss(s);
        string temp;
        while(ss>>temp){
        reverse(temp.begin(),temp.end());
        v.push_back(temp);
        }
    
        string res= "";
        res = res+v[0];
        for(int i=1;i<v.size();i++){
            res = res+" "+ v[i];
        }
        return res;
    }
};