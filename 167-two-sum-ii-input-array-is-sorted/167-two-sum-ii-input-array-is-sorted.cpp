class Solution {
public:
    vector<int> twoSum(vector<int>& n, int t) {
        int p=0,q,sum,l=n.size();
        q=l-1; // we have two pointer one at the start other end of arr. according to the sum we decreeace and increase these
        //binary search approach will be just fix one element and search t - x  
        vector<int> res(2,0);
        while(p!=q){
            sum=n[p]+n[q];
            if(sum==t){
                res[0]=p+1;res[1]=q+1;
                break;
            }
            if(sum>t){
                q--;
            }else if(sum<t){
                p++;
            }
        }
        return res;
    }
};