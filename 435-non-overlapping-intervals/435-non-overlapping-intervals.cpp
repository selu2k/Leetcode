// bool cmp(vector<int> a , vector<int> b){
//         return a[1] < b[1];
//     }
// class Solution {
// public:
//     int eraseOverlapIntervals(vector<vector<int>>& intervals) {
//         sort(intervals.begin(),intervals.end(),cmp);
//         //vector<vector<int>> result; // Time limit exceeded
//         vector<int> last = intervals[0];
//         int res=-1;
//         // for(auto inter: intervals){
//         //     if( result.empty() || inter[0] >= result.back()[1] ){
//         //         result.push_back(inter);
//         //     }
//         // }
//         for(auto inter: intervals){
//             if( inter[0] < last[1] ){
//                 res++;
//             }
//             else{
//                 last = inter;
//             }
//         }
//         return res;
//     }
    
// };
class Solution 
{
public:
    int eraseOverlapIntervals(vector<vector<int>>&v) 
    {
        sort(v.begin(),v.end());
        int count=0,l=0,r=1,n=v.size();
        while(r<n)
        {
            if(v[l][1]<=v[r][0]) // Non-overlapping case(Case 1)
            {
                l=r;
                r++;
            }
            else if(v[l][1]<=v[r][1])  // Case 2
            {
                count++;
                r++;
            }
            else if(v[l][1]>v[r][1])   // Case 3
            {
                count++;
                l=r;
                r++;
            }
        }
        return count;
    }
};