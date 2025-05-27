class Solution {
public:
    vector<int> searchRange(vector<int>& n, int target) {
        int ub=upper_bound(n.begin(),n.end(),target)-n.begin();
        int lb=lower_bound(n.begin(),n.end(),target)-n.begin();
        if(ub==lb) return {-1,-1};
        return {lb,ub-1};
    }
};