class Solution {
public:
    int distributeCandies(vector<int>& candy) {
        int n = candy.size();
        int maxx = n/2;
        int count=1;
        sort(candy.begin(),candy.end());
        for(int i = 1 ; i<n ; i++){
            if(candy[i] != candy[i-1]){
                count++;
            }
        }
        if(count<maxx){return count;}
        else{return maxx;}
    }
};