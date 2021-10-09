class Solution {
public:
    vector<int> twoSum(vector<int>& nu, int target) {
        vector<int> res;
        for(int i = 0 ; i<nu.size()-1;i++){
            int temp = target;
            temp = temp - nu[i];
            vector<int>::iterator it;
            it = find(nu.begin()+i+1, nu.end(), temp);
            if(it != nu.end()){
                res.push_back(i+1);
                res.push_back(it-nu.begin()+1);
                return res;
            }
        }
        return res;
    }
};