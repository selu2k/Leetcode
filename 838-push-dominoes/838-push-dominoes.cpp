class Solution {
public:
    string pushDominoes(string d) {
//         int n = dom.size(); 40/43 passed Memory limit exceeded :(
//         int fast=0;
//         int slow=-1;
//         //int dot=0;
//         string res = "";
//         for(int i = 0 ; i < n ; i++){
            
//             if(dom[i]=='.'){
//                 continue;
//             }
            
//             else if(dom[i]=='L'){
                
//                 fast = i;
//                 if(slow==-1){
//                     slow = 0;
//                     res = res + string(fast-slow+1,'L');
//                     // for(int j=0;j<fast-slow+1;j++){
//                     //     res = res + "L";
//                     // }
//                     slow = fast;
//                 }
                
//                 else if(dom[slow]=='L'){
//                     res = res + string(fast-slow,'L');
//                     // for(int j=0;j<fast-slow;j++){
//                     //     res = res + "L";
//                     // }
//                     slow = fast;
//                 }
//                 else if(dom[slow]=='R'){
//                     int x = fast - slow;
//                     if(x%2==0){
//                         res = res + string((x-1)/2,'R');
//                         // for(int j=0;j<(x-1)/2;j++){
//                         //     res = res + "R";
//                         // }
//                         res = res + ".";
//                         res = res + string((x-1)/2+1,'L');
//                         // for(int j=0;j<(x-1)/2+1;j++){
//                         //     res = res + "L";
//                         // }
//                         slow = fast;
//                     }
//                     else{
//                         res = res + string((x-1)/2,'R');
//                         // for(int j=0;j<(x-1)/2;j++){
//                         //     res = res + "R";
//                         // }
//                         res = res + string((x-1)/2+1,'L');
//                         // for(int j=0;j<(x-1)/2+1;j++){
//                         //     res = res + "L";
//                         // }
//                         slow = fast;
//                     }
//                 }
                
//             }
            
            
//             else if(dom[i]=='R'){
//                 fast = i;
//                 if(slow==-1){
//                     slow = 0;
//                     res = res + string(fast-slow,'.');
//                     // for(int j = 0 ; j<fast-slow;j++){
//                     //     res = res + ".";
//                     // }
//                     res = res + "R";
//                     slow = fast;
//                 }
//                 else if(dom[slow]=='R'){
//                     res = res + string(fast-slow,'R');
//                     // for(int j = 0 ; j< fast-slow; j++){
//                     //     res = res + "R";
//                     // }
//                     slow = fast;
//                 }
//                 else if(dom[slow]=='L'){
//                     res = res + string(fast-slow-1,'.');
//                     // for(int j = 0 ; j< fast-slow-1;j++){
//                     //     res = res + ".";
//                     // }
//                     res = res + "R";
//                     slow = fast;
//                 }
//             }
            
//         }
//         if(res.size()==0){
//             for(auto i:dom)res = res+i;
//             return res;
//         }
        
//         if(dom[slow]=='L' && slow!=n-1){
//             res = res + string(n-slow-1,'.');
//             // for(int i = 0 ; i < n-slow-1;i++){
//             //     res = res + ".";
//             // }
//         }
//         else if(dom[slow]=='R' && slow!=n-1){
//             res = res + string(n-slow-1,'R');
//             // for(int i = 0 ; i < n-slow-1;i++){
//             //     res = res + "R";
//             // }
//         }
//         if(res.size()==0){
//             for(auto i:dom)res = res+i;
//         }
        
//         return res;
        d = 'L' + d + 'R';
        string res = "";
        for (int i = 0, j = 1; j < d.length(); ++j) {
            if (d[j] == '.') continue;
            int middle = j - i - 1;
            if (i > 0)
                res += d[i];
            if (d[i] == d[j])
                res += string(middle, d[i]);
            else if (d[i] == 'L' && d[j] == 'R')
                res += string(middle, '.');
            else
                res += string(middle / 2, 'R') + string(middle % 2, '.') + string(middle / 2, 'L');
            i = j;
        }
        return res;
    }
};