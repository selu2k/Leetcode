// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int res = n;
        
        int start = 1;
        int end = n;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(isBadVersion(mid)==true){
                res = mid;
                end= mid-1;
            }else{
                start = mid+1;
            }
        }
        return res;
    }
//     int apibinary(int a,int b){
//         int res = b;
//         if(b>=a){
//             int mid = a+(b-a)/2;
            
//             if(isBadVersion(mid)== true){
//                 res = mid;
//                 apibinary(a,mid-1);
//             }
//             else{
//                 apibinary(mid+1,b);
//             }
//         }
//         return res-1;
//     }
};