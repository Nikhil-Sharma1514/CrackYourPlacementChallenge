class Solution {
public:
    vector<vector<int>> generate(int n) {
        if(n==1)
            return {{1}};
        vector<vector<int>> v={{1},{1,1}};
        if(n==2)
            return v;
        for(int i=2;i<n;i++){
            vector<int> newRow;
            newRow.push_back(1);
            for(int j=1;j<i;j++){
                // cout<<v[i-1][j-1]<<" "<<v[i-1][j]<<endl;
                newRow.push_back(v[i-1][j-1]+v[i-1][j]);
            }
            newRow.push_back(1);
            v.push_back(newRow);
        }
        return v;
    }
};
