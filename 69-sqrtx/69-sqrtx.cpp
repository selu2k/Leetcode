class Solution {
public:
    int mySqrt(int x) {
        long long n=0;
        for(long long i = 0 ; i*i <= x ; i++){
            if(i*i==x)return i;
            n=i;
        }
        return n;
    }
};