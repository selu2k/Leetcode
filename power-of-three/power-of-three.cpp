class Solution {
public:
    bool isPowerOfThree(int n) {
         if(n==1){return true;}
        if(n==0){return false;}
        while(n){
            if(n%3 !=0){return false;}
            n/=3;
            if(n==1){return true;}
        }
        return false;
        // if(n==1){return true;}
        // if(n==0){return false;}
        // if(n > 1162261467){return false;}
        // int last = n%10;
        // if( last == 1 || last == 3 || last == 7 || last == 9){
        //     if(1162261467 % n == 0){
        //         return true;
        //     }
        //     else{return false;}
        // }
        // return false;
    }
};