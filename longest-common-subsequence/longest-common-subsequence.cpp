class Solution {
public:
    
    int longestCommonSubsequence(string text1, string text2) {
        int n1 = text1.size();
        int n2 = text2.size();
        int l[n1+1][n2+1];
        for(int i = 0; i<n1+1 ; i++){
            for(int j = 0 ; j<n2+1 ; j++){
                if(i == 0 || j == 0){
                    l[i][j] = 0 ;
                }
                else if(text1[i-1] == text2[j-1]){
                    l[i][j] = l[i-1][j-1] + 1;
                }
                else{
                    l[i][j] = max(l[i-1][j],l[i][j-1]);
                }
            }
        }
        return l[n1][n2];
    }
};