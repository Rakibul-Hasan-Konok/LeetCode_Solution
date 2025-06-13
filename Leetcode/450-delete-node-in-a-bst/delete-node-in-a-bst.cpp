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
    TreeNode* getMin(TreeNode* r) {
        while (r && r->left) r = r->left;
        return r;
    }

    TreeNode* deleteNode(TreeNode* r, int k) {
        if (!r) return nullptr;
        if (k < r->val) r->left = deleteNode(r->left, k);
        else if (k > r->val) r->right = deleteNode(r->right, k);
        else {
            if (!r->left) {
                auto t = r->right;
                delete r;
                return t;
            }
            if (!r->right) {
                auto t = r->left;
                delete r;
                return t;
            }
            auto t = getMin(r->right);
            r->val = t->val;
            r->right = deleteNode(r->right, t->val);
        }
        return r;
    }
};
