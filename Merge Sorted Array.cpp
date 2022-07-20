class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(n==0)
            return;
        if(m==0){
            nums1=nums2;
            return;
        }
        priority_queue <int, vector<int>, greater<int> > pq;
        for(int i=0;i<n;i++){
            pq.push(nums2[i]);
        }
        for(int i=0;i<nums1.size();i++){
            if(i>=m){
                nums1[i]=pq.top();
                pq.pop();
            }
            if(nums1[i]>pq.top()){
                // swap(nums1[i],pq.top());
                int temp=nums1[i];
                nums1[i]=pq.top();
                pq.pop();
                pq.push(temp);
            }
        }
    }
};
