class Solution {
public:
    vector<string> generateParenthesis(int n) {
        
        vector<string> res;
        generateParenthesis(res,"",0,0,n);
        return res;
    }
    
    void generateParenthesis(vector<string> &res, string str, int start, int end, int n){
        if(start==n && end==n){
            res.push_back(str);
        }
        if(start<n){
            generateParenthesis(res,str+"(",start+1,end,n);
        }
        if(end<start){
            generateParenthesis(res,str+")",start,end+1,n);
        }
    }
};

