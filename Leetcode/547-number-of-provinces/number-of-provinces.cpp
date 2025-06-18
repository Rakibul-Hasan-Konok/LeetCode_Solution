class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<bool> visited(n);
        int count = 0;
        function<void(int)> dfs = [&](int i) {
            visited[i] = true;
            for (int j = 0; j < n; ++j) {
                if (isConnected[i][j] && !visited[j]) {
                    dfs(j);
                }
            }
        };
        for (int i = 0; i < n; ++i) {
            if (!visited[i]) {
                dfs(i);
                ++count;
            }
        }
        return count;
    }
};
