class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int start = 0 ; 
        int end = tokens.size()-1;
        int ans = 0;
        int score = 0;
        while(start <= end){ //always face up lowest token
            if(tokens[start] <= power){
                score += 1;
                power -= tokens[start];
                start++;
                ans= max(ans,score);
            }
            else if(power<tokens[start] && score > 0){ //always face down highest token if score >0
                score--;
                power += tokens[end];
                end--;
            }
            else{
                return ans;
            }
        }
        return ans;
    }
};