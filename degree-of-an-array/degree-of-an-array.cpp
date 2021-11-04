
        class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        map<int,int>m;
        for(auto a:nums){
            m[a]++;
        }
        int l=0;
        for(auto a:m){
            if(l<a.second){
              l=a.second;  
            }
        }
        vector<int> v;
        for(auto a:m){
            if(l==a.second){
               v.push_back(a.first);
            }
        }
        
        
        int mn=INT_MAX;
        for(auto aa:v){
            int i=0;
            int c=nums.size();
            while(nums[i]!=aa){
                c--;
                i++;
            }
            i=nums.size()-1;
            while(nums[i]!=aa){
                c--;
                i--;
            }
            
            cout<<c<<endl;
            mn=min(mn,c);
        }
        return mn;
    }
};
