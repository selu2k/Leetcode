#include <cstring>  
class Solution {
public:
    string truncateSentence(string s, int k) {
        // char *ptr[500];
        // ptr  = strtok(s," ");
        int count = 0;
        string res ;
        // while(count <= k){
        //     red = res + " " + ptr ; 
        //     ptr = strtok(NULL," ");
        //     count++;
        // }
        // return res;
        for(int i = 1 ; i< s.size();i++){
            if(s[i] == ' '){
                count++;
            }
            if(count == k){
                res = s.substr(0,i);
                break;
            }
            else if(i == s.size()-1){
                return s;
            }
            
        }
        return res;
    }
};