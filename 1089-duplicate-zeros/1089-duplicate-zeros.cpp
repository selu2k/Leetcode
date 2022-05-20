class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        vector<int> v;
        for(auto i:arr){
            if(i==0){
                v.push_back(0);
                v.push_back(0);
            }
            else{
                v.push_back(i);
            }
        }
        for(int i = 0 ; i<n;i++){
            arr[i]=v[i];
        }
        
    }
};