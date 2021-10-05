class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res = "";
        int n1 = word1.size();
        int n2 = word2.size();
        int i =0,j = 0;
        while(i<n1 || j<n2){
            if(i<n1){
                res = res + word1[i];
                i++;
            }
            if(j<n2){
                res+= word2[j];
                j++;
            }
        }
        return res;
    }
};