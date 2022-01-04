class Solution {
public:
    int bitwiseComplement(int num) {
        if(!num) return 1;
        int l=floor(log2(num))+1;
        int ress = num^((1L<<l)-1);
        return ress;
    }
};