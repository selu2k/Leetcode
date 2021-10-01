class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int n = operations.size();
        int x = 0;
        for(int i = 0 ; i<n ; i++){
            switch(operations[i][0]){
                case '-': x= x-1; break;
                case '+': x = x+1; break ;
                case 'X':
                    if(operations[i][1] == '-'){
                        x= x -1;
                    }else{x = x + 1;}
                    break;
            }
                    
        }
        return x;
    }   
};