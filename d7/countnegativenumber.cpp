class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int i,j,ct=0;
        for(i=0;i<grid.size();i++){
            for(j=0;j<grid[i].size();j++){
                if(grid[i][j]<0){
                    ct++;
                }
            }
        }
        return ct;
    }
};

