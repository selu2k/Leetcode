class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n = letters.size();
        int l=0;
        int r=n-1;
        int mid;
        while(l<=r){
            mid = l + (r-l)/2;
            if(letters[mid]<= target){
                l = mid+1;
            }
            else if(letters[mid] > target){
                if( mid!=0 && letters[mid-1] <= target) return letters[mid];
                r = mid-1;
            }
        }
        // for(auto i : letters){
        //     if( i > target){
        //         return i;
        //     }
        // }
        return letters[0];
    }
};