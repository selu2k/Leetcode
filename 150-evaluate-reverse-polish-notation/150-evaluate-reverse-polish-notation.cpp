class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> res;
        int n = tokens.size();
        int a=0,b=0;
        for(int i=0;i<n;i++){
            if(tokens[i]=="+"){
                    a= res.top(); res.pop();
                    b=res.top(); res.pop();
                    res.push(a+b);}
            else if(tokens[i]=="-"){
                    a= res.top(); res.pop();
                    b=res.top(); res.pop();
                    res.push(b-a);}
            else if(tokens[i]=="*"){
                    a= res.top(); res.pop();
                    b=res.top(); res.pop();
                    res.push(a*b);}
            else if(tokens[i]=="/"){
                    a= res.top(); res.pop();
                    b=res.top(); res.pop();
                    res.push(b/a);}
            else{
                res.push(stoi(tokens[i]));
            }
        }
        int ress = res.top();
        return ress;
    }
};