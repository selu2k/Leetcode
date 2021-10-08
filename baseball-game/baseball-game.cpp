class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> v;
        for(int i = 0 ; i<ops.size();i++){
           if(ops[i] == "D"){
                
                int temp = 2 * v[v.size()-1];
                v.push_back(temp);
            }
            else if(ops[i]=="C"){
                v.pop_back();
            }
            else if(ops[i] == "+"){
                int temp = v[v.size()-1]+v[v.size()-2];
                v.push_back(temp);
            }
            else{
                v.push_back(stoi(ops[i]));
            }
        }
        int sum = 0;
        for (auto it = v.begin();
         it != v.end(); ++it){
            sum+=*it;
        }
        return sum;
    }
};