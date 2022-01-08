class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> v;
        vector<int> t{1};
        v.push_back(t);
        if(numRows==2 || numRows > 2){vector<int> p{1,1};v.push_back(p);}
        for(int i = 2; i<numRows;i++){
            vector<int> temp;
            temp.push_back(1);
            for(int j=1 ; j<i;j++){
                int n = v[i-1][j-1]+v[i-1][j];
                temp.push_back(n);
            }
            temp.push_back(1);
            v.push_back(temp);
        }
        return v;
    }
};