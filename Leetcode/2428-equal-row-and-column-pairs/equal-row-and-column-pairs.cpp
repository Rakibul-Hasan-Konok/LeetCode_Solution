class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size();
        int ans = 0;
        for(int i =0; i< n; i++){
            vector<int>tmp(n);
            for(int j =0; j<n; j++){
                tmp[j] = grid[j][i];
            }
            int count = 0;
            for(auto v : grid){
                if(v == tmp) count++;
            }
            ans += count;
        }
        return ans;
    }
};