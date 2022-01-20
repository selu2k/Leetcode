class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1,r=1000000000;
        while(l<=r){
            int mid = (l+r)/2;
            int sum = 0;
            for(int i:piles) sum+= ceil(1.0* i/mid);
            if(sum>h) l = mid+1;
            else r = mid-1;
        }
        return l;
    }
};