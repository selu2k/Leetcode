class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<int> v;
        int i=0;
        int m = target.size();
        int j=0;
        vector<string>s;
        while(i<n){
            if(v!=target){
                if(i+1 == target[j]){
                    s.push_back("Push");
                    v.push_back(i+1);
                    j++;
                }
                else{
                    s.push_back("Push");
                    s.push_back("Pop");
                }
            }
            else{
                break;
            }
            i++;
        }
        return s;
        
    }
};