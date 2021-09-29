class Solution {
public:
    bool isPalindrome(int x) {
        vector<int> digits;
        //int i = 0;
        if(x<0){return false;}
        
        while(x>0){
            digits.push_back(x%10);
            x = x/10;
        }
        int n = digits.size();
        for(int i =0; i < (digits.size())/2;i++){
            if(digits[i] != digits[digits.size()-1-i]){
                return false;
            }
        }
        return true;
    }
};