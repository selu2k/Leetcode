class Solution {
public:
    int climbStairs(int n) {
        
        int a1 = 1,a2 =2;
        int i = 3;
        int ways = 0;
        if( n <3){return n;}
        while(i<=n){
            ways = a1 + a2 ; 
            a1 = a2;
            a2 = ways;
            i++;
        }
        return ways;
    }
};