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
    int maxDepth(TreeNode* root) {
        if (!root) return 0;

        std::queue<TreeNode*> q;
        int count = 0;

        q.push(root);

        while (!q.empty()) {
            count++;
            int size = q.size();

            for (int i = 0; i < size; i++) {
                TreeNode* branch = q.front();
                q.pop();

                if (branch->left) q.push(branch->left);
                if (branch->right) q.push(branch->right);
            }
        }
        return count;
    }
};