class Solution {
public:
    bool isPalindrome(int x) {
        int rem;
        double ans=0;
        int copy=x;
        while(copy>0)
        {
            rem=copy%10;
            ans=ans*10+rem;
            copy/=10;
        }
        if(ans==x)
            return true;
        else
            return false;
    }
};




