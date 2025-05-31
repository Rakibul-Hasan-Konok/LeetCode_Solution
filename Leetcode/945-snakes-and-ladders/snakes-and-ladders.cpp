class Solution {
public:
    int snakesAndLadders(vector<vector<int>>& board) {
        int n = board.size();

        auto getCoordinates = [&](int s) {
            int quot = (s - 1) / n;
            int rem = (s - 1) % n;
            int row = n - 1 - quot;
            int col = (quot % 2 == 0) ? rem : (n - 1 - rem);
            return make_pair(row, col);
        };

        vector<bool> visited(n * n + 1, false);
        queue<pair<int, int>> q;
        q.push({1, 0});
        visited[1] = true;

        while (!q.empty()) {
            auto [s, moves] = q.front();
            q.pop();

            if (s == n * n) return moves;

            for (int i = 1; i <= 6 && s + i <= n * n; ++i) {
                int next = s + i;
                auto [row, col] = getCoordinates(next);
                if (board[row][col] != -1) {
                    next = board[row][col];
                }
                if (!visited[next]) {
                    visited[next] = true;
                    q.push({next, moves + 1});
                }
            }
        }

        return -1;
    }
};
