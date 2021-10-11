class Solution {
public:
    bool isHappy(int n) {
        int num = n;
        while(num!=1){
            int sum=0;
            while(num){
                int dig = num%10;
                sum = sum + dig*dig;
                num = num/10;
            }
            num = sum;
            if(num == 7 || num == 1){return true;}
            if(num <10){return false;}
        }
        return true;
    }
};