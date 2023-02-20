class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int pos=0,neg=0,ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                pos++;
            }
            if(nums[i]<0){
                neg++;
            }
            if(nums[i]==0){
                continue;
            }
            ans=max(pos,ans);
            ans=max(neg,ans);
        }
        return ans;
    }
};