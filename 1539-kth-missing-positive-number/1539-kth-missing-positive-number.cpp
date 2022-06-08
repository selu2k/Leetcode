class Solution {
public:
     int findKthPositive(vector<int>& arr, int k) {
    //     int n = arr.size();
    //     int num=0;
    //     int j = 0;
    //     for(int i=1 ; i<=2000 ;i++){
    //         if( j < n){
    //             if(arr[j] != i){
    //                 num++;
    //                 if(num == k) return i;
    //             }
    //             else{
    //                 j++;
    //             }
    //         }
    //         else{
    //             num++;
    //             if(num == k ) return i;
    //         }
    //     }
    //     return 0;
    // }
    // int findKthPositive(vector<int>& arr, int k) {
    //     for (auto a : arr) if (a <= k) k++;
    //     return k;
    // }
    for (int n = 1, i = 0; n <= 1000; ++n) {
        if (i < arr.size() && arr[i] == n)
            ++i;
        else if (--k == 0)
            return n;
    }
    return 1000 + k;}
};