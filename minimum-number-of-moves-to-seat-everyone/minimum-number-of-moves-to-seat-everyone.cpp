class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& s) {
        sort(seats.begin(),seats.end());
        sort(s.begin(),s.end());
        int sum = 0 ;
        for(int i= 0 ; i<s.size();i++){
            sum+= abs(s[i]-seats[i]);
        }
        return sum;
    }
};