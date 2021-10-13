#include <bits/stdc++.h>
class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==1){return true;}
        while(n){
            if(n%4 != 0){return false;}
            n/=4;
            if(n==1){return true;}
        }
        
        // float l = log4(n);
        // if((int)l == log4(n)){return true;}
        return false;
    }
};