class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int n = arr.size();
        //sort(arr.begin(),arr.end());
        for(int i = 0 ; i<n;i++){
            
            if(arr[i]!=0 && find(arr.begin(),arr.end(),arr[i]*2) != arr.end()){
                return true;
            }
            if(arr[i]==0 && count(arr.begin(),arr.end(),0)>1) return true;
        }
        return false;
    }
};