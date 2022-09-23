class Solution {
public:
    int concatenatedBinary(int n) {
        // string bin="";
        //using bitset its becoming too complicated
        
        long res = 0;
        int mod = 1e9 + 7;
        
        
        // as we only need the decimal value
        // we will just shift left the current result by the number of bits in current number
        // basically same as bitset where we can convert the use OR operation (problem is size)
        
        
        for(int i = 1 ; i<=n ; i++){
            int shift = log2(i)+1;
            res = ((res << shift) + i ) % mod ;
        }
        
//         bitset<128>ans(0);
//         for(int i = 1 ; i<=n; i++){
//             int shift = log2(i)+i;
//             bitset<128> x(i);
//             ans = ((ans << shift) | x );
//             long y = ans.to_ulong();
//             y = y%mod;
//             ans = bitset<128>(y);
//         }
        
        
//         return ans.to_ulong()%mod;
        return res;
    }
    
};