class Solution {
public:
    int maxProfit(vector<int>& prices) {
        /*int p=prices.size();
        int ans=0;
        int pr=0;

        for(int i=1;i<p;i++){
            ans+=max(prices[i]-prices[i-1],0);
            
        }    
        return ans;*/
        
        int ans=0;
        int p=prices.size();
        for(int i=0;i<p-1;i++){
            if(prices[i]<prices[i+1]){
                ans+=(prices[i+1]-prices[i]);
            }
        }
        return ans;
    }
};