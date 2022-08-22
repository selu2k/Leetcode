class Solution {
public:
    bool isPowerOfFour(int num) {
        //we can use loops or recursion
        //another trick is to use log() function
        // we can check if float and int of log is same
        // int l = log4(n);
        // if((int)l == log4(n)) return true;
        // return false;
        
        
        //in this method we are using left shift and comparing with known powers of 4
        // first is 2^0 = 1, 2^(0+2) = 4 , 2^(2+2) = 16 , 2^(4+2) = 64....
        if(num<0)return false;
        for(int i=0;i<32;i+=2)if(num==1<<i)return true;
        return false;
    }
};