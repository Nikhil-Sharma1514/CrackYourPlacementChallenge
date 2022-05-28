class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0];
        int i=0,j=0;
        int ans=INT_MIN,sum=0;
        while(i<nums.size()&&j<nums.size()){
            sum+=nums[j];
            ans=max(ans,sum);
            if(sum<0){
                sum=0;
                i=j+1;
            }
            j++;
        }
        return ans;
    }
};
