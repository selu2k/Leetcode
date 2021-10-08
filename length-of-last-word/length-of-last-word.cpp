class Solution {
public:
    int lengthOfLastWord(string s) {
        size_t found = s.find(" ");
        while(s.find(' ',found+1) != string::npos){
            found = s.find(" ",found+1);
        }
        int count = 0;
        int i = found;
        if(s[i+1]){return s.size()-i-1;}
        bool flag = false;
        while(i>0){
            
            if(s[i-1] == ' ' && flag == true){return count;}
            else if(s[i-1]!= ' '){
                count++;flag = true;
            }
            i--;
        }
        return count;
         
    }
};