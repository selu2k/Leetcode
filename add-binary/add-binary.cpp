class Solution {
public:
    string addBinary(string a, string b) {
        string res = "";
        int n1 = a.size();
        int n2 = b.size();
        int i = n1-1,j=n2-1;
        int s = 0;
        while(i>=0 || j>=0 || s == 1){
            s += ((i>=0)? a[i]-'0':0);
            s += ((j>=0)? b[j]-'0':0);
            
            res = char(s%2 + '0') + res;
            s = s/2;
            i--;j--;
        }
       
        return res;
    }
};