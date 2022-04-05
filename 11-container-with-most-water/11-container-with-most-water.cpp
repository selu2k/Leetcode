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
// we take two pointers one at start and other at the end.
// then we traverse the array finding the water storage amount
// Now we will increment/decrement the pointer that is lesser in height
// so that we keep the longer pointer