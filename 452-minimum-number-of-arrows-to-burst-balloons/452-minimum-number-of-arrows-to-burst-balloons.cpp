bool cmp(vector<int>& a, vector<int>& b) {return a[1] < b[1];}
class Solution {
public:
    
    
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end(), cmp);
        int arrow = points[0][1];
        int n = points.size();
        int needed =1;
        for(int i = 1 ; i< n ;i++){
            if( !(arrow <= points[i][1] && arrow>=points[i][0])){
                needed++;
                arrow = points[i][1];
            }
        }
        return needed;
    }
    
};