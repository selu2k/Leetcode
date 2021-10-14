class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int> res;
        int i=0 , j=0;
        while(i< n1 && j<n2){
            if(nums1[i] == nums2[j]){
                res.push_back(nums1[i]);
                i++;j++;
            }
            else if(nums2[j]>nums1[i]){
                i++;
            }
            else{j++;}
        }
        return res;
    }
};