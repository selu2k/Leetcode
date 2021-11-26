class Solution {
public:
    vector<int> twoSum(vector<int>& n, int t) {
        // vector<int> res;
        // for(int i = 0 ; i<nu.size()-1;i++){
        //     int temp = target;
        //     temp = temp - nu[i];
        //     vector<int>::iterator it;
        //     it = find(nu.begin()+i+1, nu.end(), temp);
        //     if(it != nu.end()){
        //         res.push_back(i+1);
        //         res.push_back(it-nu.begin()+1);
        //     }
        // }
        // return res;
        int p=0,q,sum,l=n.size();
        q=l-1;
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