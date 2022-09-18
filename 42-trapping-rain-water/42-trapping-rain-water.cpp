class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if(n<3) return 0;
        int max = 0;
        int maxi=-1;
        int waste = 0;
        int water = 0;
        for(int i = 0 ; i<n ;i++){
            if(height[i]==0) continue;
            if(max==0 && maxi==-1){
                max = height[i];
                maxi = i;
            }
            else if(height[i]>=max){
                water += max*(i-maxi-1) - waste;
                max = height[i];
                maxi = i;
                waste = 0;
            }else{
                waste += height[i];
            }
        }
        waste = 0;
        max=0;
        int temp = maxi;
        for(int i = n-1; i>=temp ;i--){
            if(height[i]==0) continue;
            if(max==0){
                max = height[i];
                maxi = i;
            }
            else if(height[i]>=max){
                water += max*(maxi-i-1) - waste;
                max = height[i];
                maxi = i;
                waste = 0;
            }else{
                waste += height[i];
            }
        }
        
        return water;
    }
};