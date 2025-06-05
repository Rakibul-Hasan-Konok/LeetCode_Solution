class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0;
        int n=nums.size();
        for(int i=0;i<k;i++) sum+=nums[i];

    double ans=(double)(sum/k);
    for(int i=1;i<=n-k;i++){
        sum+=nums[i+k-1];
        sum-=nums[i-1];
        ans=max(ans,double(sum/k));
    
    }
    return ans;

    }
};