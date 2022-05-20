class Solution {
public:
    string reverseOnlyLetters(string s) {
        int i = 0;
        int n = s.size();
        int j = n-1;
        string temp = s;
        while(i<j){
            while(isalpha(s[i]) == 0 && i<j){
                i++;
            }
            while(isalpha(s[j]) == 0 && j>i){
                j--;
            }
            char t = s[i];
            s[i] = s[j];
            s[j] =t;
            i++;
            j--;
        }
        return s;
    }
};