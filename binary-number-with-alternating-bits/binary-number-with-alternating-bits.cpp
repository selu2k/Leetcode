class Solution {
public:
    bool hasAlternatingBits(int n) {
        int num = floor(log2(n))+1;
        bitset<32> m(n);
        int last = m[0];
        for(int i = 1 ; i<num ; i++){
            if(m[i]==last){
                return false;
            }
            last = m[i];
        }
        return true;
        
    }
};