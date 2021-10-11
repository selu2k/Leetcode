class Solution {
public:
    int titleToNumber(string col) {
        int n=col.size();
        int num=0;
        for(int i = 0 ; i<n ; i++){
            num = num + pow(26,i)*(col[n-1-i]-64);
        }
        return num;
    }
};