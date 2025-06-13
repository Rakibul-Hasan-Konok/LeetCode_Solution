/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    int dfs(TreeNode* n, long long s, int t, unordered_map<long long, int>& m) {
        if (!n) return 0;
        s += n->val;
        int c = m[s - t];
        m[s]++;
        c += dfs(n->left, s, t, m) + dfs(n->right, s, t, m);
        m[s]--;
        return c;
    }

    int pathSum(TreeNode* r, int t) {
        unordered_map<long long, int> m;
        m[0] = 1;
        return dfs(r, 0, t, m);
    }
};
