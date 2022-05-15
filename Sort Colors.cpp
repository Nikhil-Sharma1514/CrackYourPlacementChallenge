class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l=0,m=0,h=nums.size()-1;
        
        while(m<=h){
            // cout<<nums[l]<<" "<<nums[m]<<" "<<nums[h]<<endl;
            if(nums[m]==1)
                m++;
            else if(nums[m]==0){
                swap(nums[m],nums[l]);
                l++;
                m++;
            }
            else{
                swap(nums[m],nums[h]);
                h--;
            }
        }
        
    }
};
