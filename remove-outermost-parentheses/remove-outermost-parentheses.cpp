class Solution {
public:
    string removeOuterParentheses(string s) {
        string res="";
        int open =0;
        for(char ch : s){
            if(ch == '('){
                open++;
                if(open!=1){
                    res+= ch;
                }}
                else{
                    open--;
                    if(open != 0){
                        res+= ch;
                    }
                }
        }
        
        // char x = '(';
        // char y = ')';
        // string res = "";
        // int first = 0;
        // for(int i = 1; i<n;i++){
        //     if(s[i] == y && s[i-1] == y){
        //         res+= s.substdr(first,i-1);
        //     }
        //     if( s[i] == x && s[i-1] == x){
        //         first = i;
        //     }
        // }
        return res;
    }
};