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
    TreeNode* invertTree(TreeNode* root) {
        if(root==nullptr) return 0;
        queue<TreeNode*> que;
        que.push(root);
        while(!que.empty()){
            TreeNode* current=que.front();
            que.pop();
            swap(current->left,current->right);
            if(current->left) que.push(current->left);
            if(current->right) que.push(current->right);

        }
        return root;
        
    }
};