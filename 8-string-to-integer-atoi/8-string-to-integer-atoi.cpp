class Solution {
public:
    int myAtoi(string s) {
        int n = s.size();
        int i =0;
        while(s[i]==' '){ // negative sign always at the start so don't pass over 0
            i++;
        }
        long long res = 0;
        bool neg = false;
        // if(s[i] == '+' || s[i] == '-'){
        //     neg = (s[i] == '-');
        //     i++;
        // }
        if(s[i]=='+') i++;
        else if(s[i]=='-') neg = true , i++;
        while(s[i]>='0' && s[i]<='9'){
            res = res*10 + s[i]-'0';
            if(res>=INT_MAX && !neg) {res = INT_MAX; break;}
            else if(res>INT_MAX && neg) {res = INT_MIN; break;}
            i++;
        }
        if(neg) res *=-1;
        return int(res);
    }
};