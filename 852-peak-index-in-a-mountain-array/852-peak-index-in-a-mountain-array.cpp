class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        // int n  = arr.size();
        // int l = 0;
        // int r = n-1;
        // int mid;
        // while(l<=r){
        //     mid = l + (r-l)/2;
        //     if(arr[mid-1]<arr[mid] && arr[mid+1]<arr[mid]){
        //         return mid;
        //     }
        //     else if(arr[mid-1]<arr[mid] && arr[mid+1]>arr[mid]){
        //         l= mid+1;
        //     }
        //     else if(arr[mid-1]>arr[mid] && arr[mid+1]<arr[mid]){
        //         r = mid -1;
        //     }
        // }
        // return mid;
        int n = arr.size();
        int i = 1;
        while(arr[i+1]>arr[i]){i++;}
        return i;
    }
};