class Solution {
public:
    int reverse(int x) {
        double ans=0;
        int rem;
        while(x!=0)
        {
            rem = x%10;
            ans = ans*10+rem;
            x/=10;
        }  
            if(ans>pow(2,31)-1 || ans<-(pow(2,31)))
               {
                   return 0;
               }
        return ans;
    }
};