class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        stack<int> s;
        int n = sandwiches.size();
        int m = students.size();
        queue<int> q;
        for(int i=n-1;i>=0;i--){
            s.push(sandwiches[i]);
        }
        for(int i=0;i<m;i++){
            q.push(students[i]);
        }
        int res=0;
        int pre =0;
        bool flag = true;
        while(flag && !q.empty()){
            for(int i = 0 ; i < q.size() ; i++){
            if(q.front() == s.top()){
                q.pop();
                s.pop();
                res++;
            }
            else{
                int temp = q.front();
                q.pop();
                q.push(temp);
            }
            }
            if(res == pre){
                return m-res;
            }
            else{
                pre = res;
            }
        }
        return m-res;
    }
};