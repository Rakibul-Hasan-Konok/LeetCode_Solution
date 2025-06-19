class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        int n = costs.size(), left = 0, right = n - 1;
        priority_queue<int, vector<int>, greater<int>> leftPQ, rightPQ;
        long long total = 0;

        while (k--) {
            while (leftPQ.size() < candidates && left <= right)
                leftPQ.push(costs[left++]);
            while (rightPQ.size() < candidates && left <= right)
                rightPQ.push(costs[right--]);

            int leftMin = leftPQ.empty() ? INT_MAX : leftPQ.top();
            int rightMin = rightPQ.empty() ? INT_MAX : rightPQ.top();

            if (leftMin <= rightMin) {
                total += leftMin;
                leftPQ.pop();
            } else {
                total += rightMin;
                rightPQ.pop();
            }
        }

        return total;
    }
};
