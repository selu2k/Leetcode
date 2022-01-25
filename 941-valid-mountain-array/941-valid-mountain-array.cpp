class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size() <3 ) return false;
        int n = arr.size();
        int i = 1;
        while(i<n && arr[i]>arr[i-1]){
            i++;
        }
        if(arr[i]==arr[i-1] || i==1 || i==n) return false;
        while(i<n && arr[i]<arr[i-1]){
            i++;
        }
        if(i == n) return true;
        return false;
    }
};