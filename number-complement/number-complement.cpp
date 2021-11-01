class Solution {
public:
    int findComplement(int num) {
        //for(int i = 0 ; i<num)
        int l=floor(log2(num))+1;
        int ress = num^((1L<<l)-1);
        return ress;
    }
};