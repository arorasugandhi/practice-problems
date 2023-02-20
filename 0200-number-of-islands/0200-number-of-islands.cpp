class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int count = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1'){
                    count++;
                    func(grid,i,j);    
                }
            }
        }
        return count;
    }
    
    void func(vector<vector<char>>& grid, int a, int b){
        if(a<0 || b<0 || a>=grid.size() || b>=grid[0].size())
            return;
        if(grid[a][b]!='1')
            return;   
        if(grid[a][b]=='1')
        {
            grid[a][b]='0';
            func(grid,a+1,b);
            func(grid,a-1,b);
            func(grid,a,b+1);
            func(grid,a,b-1);
        } 
    }
};

 /*void turn_to_dust(vector<vector<char>>& grid, int i, int j, int m, int n){
        if (i<0 || j<0 || i==m || j==n || grid[i][j]=='0') return;
        grid[i][j]='0';
        turn_to_dust(grid,i+1,j,m,n);
        turn_to_dust(grid,i,j+1,m,n);
        turn_to_dust(grid,i-1,j,m,n);
        turn_to_dust(grid,i,j-1,m,n);
        return;
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int res=0;
        for (int i=0; i<m; i++){
            for (int j=0; j<n; j++){
                if (grid[i][j]=='1'){
                    res++;
                    turn_to_dust(grid,i,j,m,n);
                }
            }
        }
        return res;
    }*/




