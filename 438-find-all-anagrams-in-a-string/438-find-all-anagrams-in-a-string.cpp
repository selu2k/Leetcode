class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> pv(26,0), sv(26,0), res;
        if(s.size() < p.size())
           return res;
        for(int i = 0; i < p.size(); ++i)
        {
            ++pv[p[i]-'a'];
            ++sv[s[i]-'a'];
        }
        if(pv == sv) // to check if first p.size() elements are anagram
           res.push_back(0);

        for(int i = p.size(); i < s.size(); ++i) 
        {

            ++sv[s[i]-'a'];//add new element

            --sv[s[i-p.size()]-'a']; // subtract starting element
            if(pv == sv)  
               res.push_back(i-p.size()+1);
        }
        return res;
    }
};