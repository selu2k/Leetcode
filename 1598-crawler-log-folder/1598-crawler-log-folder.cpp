class Solution {
public:
    int minOperations(vector<string>& logs) {
        int n = logs.size();
        stack<string> s;
        for(int i = 0 ; i<n ; i++){
            if(logs[i] == "../"){
                if(!s.empty()){
                    s.pop();
                }
            }
            else if(logs[i] == "./"){
                
            }
            else{
                s.push(logs[i]);
            }
        }
        return s.size();
    }
};