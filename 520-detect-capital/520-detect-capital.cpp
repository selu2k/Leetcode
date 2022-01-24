class Solution {
public:
    bool detectCapitalUse(string word) {
        bool flag = true;
        int n = word.size();
        if(n==1){return true;}
        if((int)word[0]<=90){
            if((int)word[1]<=90){
                for(auto i : word){
                    if((int)i>90){return false;}
                }
            }
            else{
                for(int i = 1 ; i<n;i++){
                    if((int)word[i]<=90)return false;
                }
            }
        }
        else{
            for( auto i : word){
                if((int)i<=90){return false;}
            }
        }
        return true;
    }
};