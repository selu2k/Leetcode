class Solution {
public:
    int minDeletions(string s) {
        int ans=0;
        unordered_set<int> use;
        vector<int> v(26,0);
        for(auto i: s){
            v[i-'a']++;
        }
        for(int i = 0 ; i < 26 ; i++){ // insert function ..works
            for( ; v[i]>0 && !use.insert(v[i]).second ; v[i]--){
                ans++; // .second returns if inserted or not
            }
        }
        return ans;
    }
};