class Solution {
public:
    int findPoisonedDuration(vector<int>& t, int d) {
        int total=0;
        for(int i = 0 ; i<t.size()-1;i++){
            if(t[i]+d > t[i+1]){
                total+= t[i+1]-t[i];
            }
            else{total+=d;}
        }
        
        return total+d;
    }
};