class Solution {
public:
    int bitwiseComplement(int num) {
        if(!num) return 1;
        int l=floor(log2(num))+1; // number of bits needed
        int temp = (1L<<l)-1;  // all bits are one
         // 1L -> 1 in long notation and we shift it left by l then subtract 1 to 
         // make all the bits required bits 1;
        int ress = num^temp;
        return ress;
    }
};