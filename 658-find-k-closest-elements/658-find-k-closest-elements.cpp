class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
            // stable_sort(arr.begin(),arr.end(),[x] (const auto a, const auto b){
            //     return abs(a-x) < abs (b-x) ;
            // });
            // arr.resize(k);
            // sort(arr.begin(),arr.end());
            // return arr;
        int n = arr.size();
        int l = 0;
        int r = n - 1;
         // two pointers from left and right // keep decreseing the window size till it fits
        while( r-l >= k ){
            if( x - arr[l] <= arr[r] - x) r--;
            else l++;
        }
        return vector<int>(arr.begin()+l,arr.begin()+r+1);
    }
};