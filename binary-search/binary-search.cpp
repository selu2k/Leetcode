class Solution {
public:
    int search(vector<int>& nums, int target) {
        //sort(nums.begin(),nums.end());
        return binarysearch(nums,target,0,nums.size()-1);
        
    }
    int binarysearch(vector<int> v , int t , int l , int h){
        int mid = l + (h-l)/2;
        if(l<=h){
        if(v[mid] == t){
            return mid;
        }
        else if(v[mid]> t){
            return binarysearch(v , t , l , mid-1);
        }
        else{
            return binarysearch(v , t , mid+1 , h);
        }}
        return -1;
    }
};