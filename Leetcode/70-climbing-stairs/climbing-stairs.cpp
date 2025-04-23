class Solution {
public:
    int climbStairs(int n) {
        int ans=1,b=1,tmp;
        for(int i=0;i<n-1;i++){
             tmp=ans;
             ans=ans+b;
             b=tmp;
        }
        return ans;
    }
};