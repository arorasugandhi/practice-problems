class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>> ans;
        int i=0,j=0;
        int n=nums1.size();
        int m=nums2.size();
        while(i<n && j<m){
            int id1=nums1[i][0];
            int id2=nums2[j][0];
            if(id1==id2){
                vector<int> temp;
                temp.push_back(id1);
                temp.push_back(nums1[i][1]+nums2[j][1]);
                ans.push_back(temp);
                i++;
                j++;
            }
            else if(id1<id2){
                ans.push_back(nums1[i]);
                i++;
            }
            else if(id1>id2){
                ans.push_back(nums2[j]);
                j++;
            }
        }
        while(i<n){
            ans.push_back(nums1[i]);
            i++;
        }
        while(j<m){
            ans.push_back(nums2[j]);
            j++;
        }
        return ans;
    }
};