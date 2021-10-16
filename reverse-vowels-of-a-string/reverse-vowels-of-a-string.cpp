class Solution {
public:
    string reverseVowels(string s) {
        int n = s.size();
        int i = 0 ,j = n-1;
        while(i<j){
            while(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' && i<j && s[i]!='A' && s[i]!='E' && s[i]!='I' && s[i]!='O' && s[i]!='U'){
                i++;
            }
            if(j<i){break;}
            while(s[j]!='a' && s[j]!='e' && s[j]!='i' && s[j]!='o' && s[j]!='u' && j>i && s[j]!='A' && s[j]!='E' && s[j]!='I' && s[j]!='O' && s[j]!='U'){
                j--;
            }
            if(j<i){break;}else{
                char c = s[i];
                s[i] = s[j];
                s[j] = c;
                i++;
                j--;
            }
            
        }
        return s;
        
    }
};