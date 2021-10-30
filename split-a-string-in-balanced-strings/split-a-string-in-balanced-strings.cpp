class Solution {
public:
    int balancedStringSplit(string s) {
        int bal = 0;
        int count = 0;
        int n = s.size();
        for(int i = 0 ;i<n;i++){
            
            if(s[i]=='L'){
                bal--;
            }
            else{bal++;}
            if(bal == 0){count++;}
        }
        return count;
    }
};