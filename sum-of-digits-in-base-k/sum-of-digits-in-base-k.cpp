class Solution {
public:
    int sumBase(int n, int k) {
        int sum = 0;
        int digit;
        int temp = n;
        int i = 0;
        while(temp){
            sum = sum + temp%k;
            temp = temp/k;
        }
        return sum;
    }
};