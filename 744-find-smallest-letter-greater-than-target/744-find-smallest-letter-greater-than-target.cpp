class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n = letters.size();
        int l=0;
        int r=n-1;
        for(auto i : letters){
            if( i > target){
                return i;
            }
        }
        return letters[0];
    }
};