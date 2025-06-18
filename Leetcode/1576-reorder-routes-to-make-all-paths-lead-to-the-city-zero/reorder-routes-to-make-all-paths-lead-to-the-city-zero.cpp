class Solution {
public:
    int minReorder(int n, vector<vector<int>>& connections) {
        vector<vector<pair<int, int>>> g(n);
        for (auto& c : connections) {
            g[c[0]].push_back({c[1], 1});
            g[c[1]].push_back({c[0], 0});
        }
        int res = 0;
        function<void(int, int)> dfs = [&](int u, int parent) {
            for (auto& [v, cost] : g[u]) {
                if (v == parent) continue;
                res += cost;
                dfs(v, u);
            }
        };
        dfs(0, -1);
        return res;
    }
};
