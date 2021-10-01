class Solution {
public:
    double trimMean(vector<int>& arr) {
        int n = arr.size();
        int remove =  n/20 ;
        double sum=0 ;
        sort(arr.begin(),arr.end());
        for(int  i = remove ; i<n-remove ; i++ ){
            sum += arr[i];
        }
        int x = n - 2*remove;
        double avg = sum/(x);
        return avg;
    }
};