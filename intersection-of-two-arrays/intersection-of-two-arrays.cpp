class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        // vector<int>::iterator ptr;
        // ptr = unique(n1.begin(),n1.end());
        // n1.resize(distance(n1.begin(),ptr));
        // ptr = unique(n2.begin(),n2.end());
        // n2.resize(distance(n2.begin(),ptr));
        // for(int i = 0 ; i< n1.size();i++){
        vector<int> res;
        for(int i = 0 ;i<n1 ; i++){
            for(int j = 0 ; j < n2 ; j++){
                if(nums1[i] == nums2[j]){
                    res.push_back(nums1[i]);
                }
            }
        }
        vector<int>::iterator ptr;
        ptr = unique(res.begin(),res.end());
        res.resize(distance(res.begin(),ptr)); 
        return res;   
    }
};