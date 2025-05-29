class Solution {
public:
    int dfs(int node, int parent, int depth, const vector<vector<int>>& tree, vector<int>& parity) {
        int evenCount = (depth % 2 == 0);
        parity[node] = depth % 2;
        for (int child : tree[node]) {
            if (child != parent) {
                evenCount += dfs(child, node, depth + 1, tree, parity);
            }
        }
        return evenCount;
    }

    pair<int, int> getEvenOddCounts(const vector<vector<int>>& edges, vector<int>& parity) {
        int n = edges.size() + 1;
        vector<vector<int>> tree(n);
        for (auto& e : edges) {
            tree[e[0]].push_back(e[1]);
            tree[e[1]].push_back(e[0]);
        }
        int even = dfs(0, -1, 0, tree, parity);
        return {even, n - even};
    }

    vector<int> maxTargetNodes(vector<vector<int>>& edges1, vector<vector<int>>& edges2) {
        int n1 = edges1.size() + 1, n2 = edges2.size() + 1;
        vector<int> parity1(n1), parity2(n2);
        auto [even2, odd2] = getEvenOddCounts(edges2, parity2);
        auto [even1, odd1] = getEvenOddCounts(edges1, parity1);

        vector<int> result(n1);
        int maxCount2 = max(even2, odd2);
        for (int i = 0; i < n1; ++i) {
            result[i] = (parity1[i] == 0 ? even1 : odd1) + maxCount2;
        }
        return result;
    }
};
