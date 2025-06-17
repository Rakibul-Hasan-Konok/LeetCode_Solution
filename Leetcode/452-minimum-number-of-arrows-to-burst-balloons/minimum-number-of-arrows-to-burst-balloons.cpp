class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end(), compare);
        int arrows = 1, end = points[0][1];
        for (int i = 1; i < points.size(); ++i) {
            if (points[i][0] > end) {
                ++arrows;
                end = points[i][1];
            }
        }
        return arrows;
    }

    static bool compare(const vector<int>& a, const vector<int>& b) {
        return a[1] < b[1];
    }
};
