class Solution {
public:
    int rob(vector<int>& n) {
         int ns=n.size();
         if(ns==1) return n[0];
         if(ns==2) return max(n[0],n[1]);
         if(ns==3) {
            return max({n[0],n[1],n[2]});
         }
         vector<long long>dp(ns+1,0);
         long long int mx_first_arr=0,mx_last_arr=0;
         dp[0]=n[0];
         dp[1]=max(n[0],n[1]);
        for(int i=2;i<ns;i++){
            dp[i]=max(dp[i-1],dp[i-2]+n[i]);
        }
        mx_first_arr=dp[ns-2];
        dp[1]=n[1];
        dp[2]=max(n[1], n[2]);
        for(int i=3;i<ns;i++){
            dp[i]=max(dp[i-1],dp[i-2]+n[i]);
        }
        mx_last_arr=dp[ns-1];
        return max(mx_first_arr,mx_last_arr);

    }
};
