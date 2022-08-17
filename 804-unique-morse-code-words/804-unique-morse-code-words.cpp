class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> v{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        int n = words.size();
        set<string> s;
        for(auto i : words){
            string temp="";
            for(auto j : i){
                int index = int(j)-97;
                temp = temp + v[index];
            }
            s.insert(temp);
        }
        return s.size();
    }
};