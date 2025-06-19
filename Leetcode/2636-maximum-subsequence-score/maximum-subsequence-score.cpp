class Solution {
public:
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        int n = nums1.size();
        vector<pair<int, int>> pairs(n);
        for (int i = 0; i < n; ++i)
            pairs[i] = {nums2[i], nums1[i]};
        
        sort(pairs.rbegin(), pairs.rend());
        
        priority_queue<int, vector<int>, greater<int>> pq;
        long long sum = 0, res = 0;
        
        for (int i = 0; i < n; ++i) {
            pq.push(pairs[i].second);
            sum += pairs[i].second;
            if (pq.size() > k) {
                sum -= pq.top();
                pq.pop();
            }
            if (pq.size() == k)
                res = max(res, sum * pairs[i].first);
        }
        
        return res;
    }
};
