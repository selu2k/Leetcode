class Solution {
public:
    bool isPerfectSquare(int num) {
        float n = sqrt(num);
        int x = (int)n;
        if( n == x){return true;}else{return false;}
    }
};