class Solution {
public:
    string sortSentence(string s) {
    map<int, string> m;
    for(int i = 0 ; i< s.size(); i++){
        if(s[i] == ' '){
            continue ;
        }
        
            string word;
            while(!isdigit(s[i])){
                word += s[i];
                i++;
            }
        
        m[s[i]-'0'] = word;
    }
    string fin="";
    for(auto i : m){
        fin += i.second+" ";
    }
    fin.pop_back();
    return fin;
    }
};