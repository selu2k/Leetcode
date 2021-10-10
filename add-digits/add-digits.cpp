class Solution {
public:
    int addDigits(int n) {
        
        while(n>=10){
            int num = n;
            int sum = 0;
            int dig;
            while(num){
                dig = num%10;
                sum += dig;
                num = num/10;
            }
            n = sum;
        }
        return n;
    }
};