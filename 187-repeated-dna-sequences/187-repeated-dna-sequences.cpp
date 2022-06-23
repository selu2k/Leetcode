class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_set<string> set;
        unordered_set<string> res;
        if(s.size()<10) return vector<string>{};
        for(int i = 0 ; i<s.size()-9 ; i++){
            string temp = s.substr(i,10);
            if(set.find(temp) == set.end()){
                set.insert(temp);
                
            }else{
                res.insert(temp);
            }
        }
        vector<string> ans(res.begin(),res.end());
        return ans;
    }
};