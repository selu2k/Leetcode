class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int minn = INT_MAX;
        int n = arr.size();
        sort(arr.begin(),arr.end());
        for(int i = 0 ; i< n-1 ; i++){
            minn = min(minn,arr[i+1]-arr[i]);
        }
        vector<vector<int>> res;
        for(int i = 0 ; i< n-1 ; i++){
            if(arr[i+1]-arr[i] == minn){
                res.push_back({arr[i],arr[i+1]});
            }
        }
        return res;
    }
};