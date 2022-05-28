class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i=0,n=prices.size();
        while(i<n-1&&prices[i+1]<prices[i])
            i++;
        int ans=0;
        for(int j=i;j<n;j++){
            if(prices[j]<prices[i]){
                i=j;
                continue;
            }
            ans=max(ans,prices[j]-prices[i]);
        }
        return ans;
    }
};
