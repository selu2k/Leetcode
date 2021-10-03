class Solution {
public:
    int minimumMoves(string s) {
        int n = s.size();
        int count = 0;
        int i = 0;
        while(i<n){
            if(s[i] == 'O'){i++;}
            else{count++;i+=3;}
        }
        return count;
    }
};