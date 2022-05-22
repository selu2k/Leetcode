class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int n = name.size();
        int m = typed.size();
        if(m<n) return false;
        int j=0;
        int i=0;
        while(j<m){
            if(i< n && name[i]==typed[j]){
                j++;
                i++;
            }else if(i>0 && name[i-1]==typed[j]){
                j++;
            }else{
                return false;
            }
            
        }
//             else{
//                 if(typed[j]==name[i-1]){
//                     while(typed[j]==typed[j-1]) j++;
//                 }
//                 else{
//                     return false;
//                 }
//             }
            
//         }
        return i==n; // checking if i reached to the end i.e. if typed had repetetion for a //word in the middle
    }
};
