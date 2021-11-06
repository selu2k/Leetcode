class Solution {
public:
    int maximumUnits(vector<vector<int>>& b, int t) {
        int sum = 0 ;
        sort(b.begin(),b.end(),[](const vector<int> &a , const vector<int> &b){
            return a[1] < b[1];
        });
        int i = b.size()-1;
        while(t>0 && i>=0){
            while(b[i][0]!=0 && t>0){
                sum+=b[i][1];
                b[i][0]--;
                t--;
            }
            i--;
        }
        return sum;
    }
};