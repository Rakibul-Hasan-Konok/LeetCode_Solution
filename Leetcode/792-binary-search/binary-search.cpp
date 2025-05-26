#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int search(vector<int>& v, int target) {
        int lb = lower_bound(v.begin(), v.end(), target) - v.begin();
        if (lb == v.size() || v[lb] != target)
            return -1;
        return lb;
    }
};
