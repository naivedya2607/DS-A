class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int i,j,k=matrix[0].size(),l=matrix.size(),m=0,n=0;
        vector<vector<int>> arr(k,vector<int>(l));
        for(i=0;i<k;i++){
            for(j=0;j<l;j++){
                arr[i][j]=matrix[m][n];
                m++;
            }
            n++;
            m=0;
        }
        return arr;
    }
};


