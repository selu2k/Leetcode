class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i = 0 ;i<words.size();i++){
            auto temp = words[i];
            reverse(words[i].begin(),words[i].end());
            if(words[i] == temp){
                return temp;
            }
        }
        return "";
    }
};