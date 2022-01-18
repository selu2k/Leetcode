class Solution {
public:
    int maxArea(vector<int>& height) {
        int pointer1 = 0;
        int pointer2 = height.size()-1;
        int water = 0;
        while(pointer1<pointer2){
            water = max(water,(pointer2-pointer1)*min(height[pointer1],height[pointer2]));
            if(height[pointer1]<height[pointer2]){
                pointer1++;
            }else{
                pointer2--;
            }
        }
        return water;
    }
};