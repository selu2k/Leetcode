class Solution {
public:
    typedef long long ll;
    int divide(int dividend, int divisor) 
    {
        bool flag=false;
        if(dividend<0 && divisor<0)// both negative
        {
            flag=false;
        }
        else if(dividend<0 || divisor<0) // to later add the negative
        {
            flag=true;
        } 
        dividend=abs(dividend);
        divisor=abs(divisor);
        ll si=0,ei=dividend;
        ll ans;
        while(si<=ei) //search for the quo.
        {
            ll mid=ei-((ei-si)/2);
            if(mid*divisor==dividend)
            {
                ans=mid;
                break;
            }else if(mid*divisor>dividend)
            {
                ei=mid-1;
            }else
            {
                si=mid+1;
                ans=mid;
            }
        }
        cout<<ans<<endl;
        if(flag)
        {
            ans= -1*ans;
        }
        cout<<ans<<endl;
        if(ans>pow(2,31)-1) // turncation
        {
            ans=pow(2,31)-1;
        }else if(ans<-1*pow(2,31))
        {
            ans=-1*pow(2,31);
        }
        return ans;
    }
};