class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int start=0, total=0, curr=0;
        for(int i=0;i<gas.size();i++){
            total=total-cost[i]+gas[i];
            curr=curr-cost[i]+gas[i];
            if(curr<0){
                curr=0;
                start=i+1;
            }
        }
        return (total<0?-1:start);
    }
};

