class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int n = nums.size();
        if(n<3) return true;
        bool flag = false; // check for first error
        for(int i = 1 ; i < n ; i++ ){
            if( nums [i] < nums[i-1]){ // if decreasing
                if(!flag){ // if first offense
                    flag = true; // mark true
                    if(i!=1){ // if not first element (we can decrease the first one to minimum , so no issue)
                        if(nums[i]<nums[i-2]){ // if current element less than the element before high) then we know we need to change this one otherwise false
                            nums[i] = nums[i-1];
                        }
                        else{ // else we change the high point to element before coz its the one causing problems
                            nums[i-1] = nums[i-2];
                        }
                    }
                }
                else{ // if second offense return false;
                    return false;
                }
            }
        }
        return true;
    }
};