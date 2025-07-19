class Solution {
public:
    int deleteAndEarn(vector<int>& n) {
    vector<long long> freq(100001, 0);
    for (int i = 0; i < n.size(); i++) {
        
        freq[n[i]]++;
    }
    vector<long long> dp(100001, 0);
    dp[1] = freq[1]*1;
    for (int i = 2; i <= 100000; i++) {
        dp[i] = max(dp[i-1], dp[i-2] + freq[i]*i);
    }
    return dp[100000];

    }
};