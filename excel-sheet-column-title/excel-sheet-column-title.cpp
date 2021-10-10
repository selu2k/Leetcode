class Solution {
public:
    string convertToTitle(int c) {
        string res = "";
        int num;
        while(c>0){
            num = (c-1)%26;
            c = (c-1)/26;
            char excel = 'A'+ num;
            res.insert(0,1,excel);
        }
        return res;
    }
};