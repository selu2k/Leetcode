class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        for(int i = left ; i<=right ;i++){
            bool flag = false;
            for( auto range : ranges){
                if(i>=range[0] && i<=range[1]){
                    flag = true;
                    break;
                }
            }
            if(flag == false){return false;}
        }
        return true;
    }
};