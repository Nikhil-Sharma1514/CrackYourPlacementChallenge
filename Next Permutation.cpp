class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        // int i=n-1;
        auto it = nums.rbegin()+1;
        // while(i>0&&nums[i]<nums[i-1])
                    // cout<<*it<<endl;

        while(it<nums.rend()&&*it>=*(it-1)){
            // cout<<*it<<endl;
            it++;
        }
        if(it==nums.rend()){
            // cout<<"yess";
            reverse(nums.begin(),nums.end());
            return ;
        }
        if(it==nums.rbegin()+1){
            swap(nums[n-1],nums[n-2]);
            return;
        }
        auto minm=it-1;
        for(auto j=nums.rbegin();j<it;j++){
            
            if(*j>*it){
                swap(*j,*it);
                sort(nums.rbegin(),it,greater<int>());
                break;
            }
        }
        
        // swap(nums[i],nums[i-1]);
    }
};
