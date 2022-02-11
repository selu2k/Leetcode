class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()) return false;
        vector<int>map(26,0);
        vector<int>helper(26,0);
        for(int i =0 ; i<s1.size();i++){
            map[s1[i]-'a']++;
            helper[s2[i]-'a']++;
        }
        if(map == helper) return true;
        for(int i = s1.size();i<s2.size();i++){
            helper[s2[i]-'a']++;
            helper[s2[i-s1.size()]-'a']--;
            if(helper == map) return true;
        }
        return false;
    }
};