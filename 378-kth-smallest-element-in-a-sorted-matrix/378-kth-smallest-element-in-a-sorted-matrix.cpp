class Solution {
public:
        int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                pq.push(matrix[i][j]);
            }
        }
        int n=0;
      
        while(!pq.empty()){
            n++;
            if(n==k)
                return pq.top();
            pq.pop();
            
        }
        return 0;
    }
};