class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int j = 0 ;
        int count=0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int n = s.size();
        if(n==0){return 0;}
        for(int i = 0 ; i< g.size();i++){
            if(g[i]<=s[j]){
                count++;
                j++;
                if(j>=n){break;}
            }
            else{
                j++;
                i--;
                if(j>=n){break;}
            }
        }
        return count;
    }
};