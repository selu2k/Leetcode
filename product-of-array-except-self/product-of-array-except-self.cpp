class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res;
        int n = nums.size();
        long int pro = accumulate(nums.begin(),nums.end(),1,multiplies<int>());
        if(pro!=0){
            for(int i : nums){
                res.push_back(pro/i);
            }
        }else{
            for(int i=0;i<n;i++){
                if(nums[i]!=0){
                    res.push_back(0);
                }else{
                    int prod=1;
                    for(int j=0;j<n;j++){
                        if(j!=i){
                            prod = prod*nums[j];
                        }
                    }
                    res.push_back(prod);
                }
            }
        }
        return res;
    }
};