class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size(),m=matrix[0].size();
        vector<vector<int>> v=matrix;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                matrix[j][n-1-i]=v[i][j];
                // cout<<v[i][j]
            }
        }
    }
};
