class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<bool> visited(n);
        function<void(int)> dfs = [&](int room) {
            if (visited[room]) return;
            visited[room] = true;
            for (int key : rooms[room]) {
                dfs(key);
            }
        };
        dfs(0);
        for (bool v : visited) {
            if (!v) return false;
        }
        return true;
    }
};
