class Solution {
public:
    int romanToInt(string s) {
        int sum = 0 ;
        int len = s.length();
        int last;
        for(int i = len-1;i>=0;i--){
            char c = s[i];
            switch(c){
                case 'I':
                    if(last == 5 ||last == 10 || last == 50 || last == 100 || last == 500 || last == 1000){
                        sum = sum - 1;
                    }else{
                    sum = sum + 1;}
                    last = 1;
                    break;
                case 'V':
                    if(last == 10 || last == 50 || last == 100 || last == 500 || last == 1000){
                        sum = sum -5;}
                    else{
                    sum += 5;}
                    last = 5;
                    break;
                case 'X':
                    if(last == 50 || last == 100 || last == 500 || last == 1000){
                        sum =sum -10;}
                    else{
                        sum += 10;}
                    last = 10;
                    break;
                case 'L':
                    if(last == 100 || last == 500 || last == 1000){
                        sum = sum - 50;}
                    else{sum+= 50;}
                    last = 50;
                    break;
                case 'C':
                    if(last == 500 || last == 1000){sum = sum -100;}
                    else{sum+= 100;}
                    last = 100;
                    break;
                case 'D':
                    if(last == 1000){sum = sum - 500;} 
                    else{sum+= 500;}
                    last = 500;
                    break;
                case 'M':
                    sum+= 1000;
                    last = 1000;
                    break;
            }
        }
    return sum;
    }
};