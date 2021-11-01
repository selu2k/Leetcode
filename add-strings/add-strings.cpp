class Solution {
public:
    string addStrings(string num1, string num2) {
        int carry=0;
        int n = num1.size();
        int m = num2.size();
        if(n!=m){
            if(n-m>0){
                for(int i = 0 ; i<n-m;i++){
                    num2="0"+num2;
                }
            }
            else{
                for(int i = 0 ; i<m-n;i++){
                    num1="0"+num1;
                }
            }
        }
        n = num1.size();
        string res="";
        for(int i =n-1 ;i>=0;i--){
            int x = num1[i]-'0';
            int y = num2[i]-'0';
            int sum;
            if(x+y+carry>10){
                sum = x+y+carry-10;
                carry=1;
            }
            else if(carry+x+y == 10){
                sum = 0;
                carry =1;
            }
            else{sum = x+y+carry;carry=0;}
            res = to_string(sum)+res;
        }
        if(carry==1){res="1"+res;}
        return res;
    }
};