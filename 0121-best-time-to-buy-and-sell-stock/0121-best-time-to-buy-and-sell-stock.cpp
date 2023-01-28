class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int p = prices.size();
        int m = INT_MAX;
        int ans = 0;
        int pr = 0;
        for(int i=0;i<p;i++){
            if(prices[i]<m){
                m=prices[i];
            }
            pr=prices[i]-m;
            if(ans<pr){
                ans=pr;
            }
        }
        return ans;
    }
};

