class Solution {
public:
    bool wordPattern(string p, string s) {
        int n = p.size();
        int i =0;
        unordered_map<char, string> map;
        string word;
        int count=0;
        stringstream iss(s);
        while( iss>>word ){  
            if(map.find(p[i]) == map.end()){
                unordered_map<char, string>:: iterator it;
                for (it = map.begin(); it != map.end(); ++it) {
                    if (it->second == word) return false;
                }
                map.insert(make_pair(p[i],word));
                i++;
            }
            else{
                if(map[p[i]] != word){return false;}
                i++;
            }
            count++;
        }
        if(n!=count){return false;}
        return true;
    }
};