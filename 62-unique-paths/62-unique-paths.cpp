class Solution {
public:
    int uniquePaths(int m, int n) {
        // long long tot = factorial(m+n-2);
        // long long mm = factorial(m-1);
        // long long nn = factorial(n-1);
        m = m-1;
        n = n-1;
        if(m<n){
            int temp = m;
            m = n;
            n = temp;
        }
        int div = 1;
        long ans = 1;
        for(int i = m+1 ; i < (m+n+1); i++ , div++){
            ans = ans*i;
            ans = ans/div;
        }
        //tot = tot/mm;
        //tot = tot/nn;
        return ans;
    }
    // long long factorial(int n){
    //     //if(n<0) return -1;
    //     if(n==0) return 1;
    //     else return (factorial(n-1)*n);
    // }
};