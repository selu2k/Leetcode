class Solution {
public:
    int findLHS(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int maxx=0;
        // int same =1 ;
        // bool flag= true;
        // for(int i = 1 ; i<n ; i++){
        //     if(nums[i]==nums[i-1]){
        //         count++;
        //         same++;
        //     }
        //     if(nums[i]!=nums[i-1]){
        //         if(nums[i]-nums[i-1]==1 && flag == true){
        //             count++;
        //             flag = false;
        //             //maxx=max(maxx,count);
        //         }
        //         else if(nums[i]-nums[i-1]==1 && flag == false){maxx = max(maxx,count);
        //             count=1+same;
        //              same=1;
        //             flag = true;}
        //         else{maxx=max(maxx,count);count=0;same=0;flag=true;}
        //     }
        // }
        // return maxx;
        unordered_map<int,int> m;
        for(int i = 0 ; i<n ;i++){
            m[nums[i]]++;
        }
        for(int i =1 ;i<n;i++){
            if(nums[i]-nums[i-1]==1){
                int temp = m[nums[i]]+m[nums[i-1]];
                maxx = max(maxx,temp);
            }
        }
        return maxx;
    }
};