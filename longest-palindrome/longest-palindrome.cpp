class Solution {
public:
    int longestPalindrome(string s) {
        int n = s.size();
        vector<int> v;
        v.assign(100,0);
        for(int i = 0 ; i< n ;i++){
            v[int(s[i])-65]++;
        }
        int count=0;
        bool flag = true;
        for(int i = 0 ; i<100;i++){
            if(v[i]%2 != 0){
                if(flag == true){
                    flag =false;
                    count+=v[i];
                }
                else{count+=v[i]-1;} 
            }
            else{
                count+=v[i];
            }
        }
    return count;
    }
};