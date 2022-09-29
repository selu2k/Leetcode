class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
            stable_sort(arr.begin(),arr.end(),[x] (const auto a, const auto b){
                return abs(a-x) < abs (b-x) ;
            });
            arr.resize(k);
            sort(arr.begin(),arr.end());
            return arr;
//         int n = arr.size();
//         int l = 0;
//         int r = n - k;
        
//         while( l<r ){
//             int m = (l + r)/2 ;
//             if( x - arr[mid] > arr[mid+k] - x){
                
//             }
//         }
    }
};