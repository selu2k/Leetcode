class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        map<int,int> m;
        int maxx=0;
        int maxk=0;
        int mn = trust.size();
        if(mn==0){if(n==1){return 1;}}
        for(int i = 0 ; i<mn;i++){
            m[trust[i][1]]++;
        }
        for(auto x : m){
            if(x.second == n-1){
                maxk = x.first;
                for(int i = 0 ; i<mn;i++){
                    if(trust[i][0] == maxk){
                        return -1;
                    }
                }
                return maxk;
            }
        }
        
        return -1;
    }
};