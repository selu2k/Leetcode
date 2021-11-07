class Solution {
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
        int d= (accumulate(A.begin(),A.end(),0)-accumulate(B.begin(),B.end(),0))/2;
        for( int i : B){
            if(find(A.begin(),A.end(),i+d) != A.end()){
                return {i+d,i};
            }
        }
        return {1,1};
    }
};