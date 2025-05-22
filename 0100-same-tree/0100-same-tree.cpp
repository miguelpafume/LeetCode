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
#include <queue>

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        std::queue<TreeNode*> queue;
        queue.push(p);
        queue.push(q);

        while (!queue.empty()) {
            TreeNode* y = queue.front();
            queue.pop();
            TreeNode* x = queue.front();
            queue.pop();

            if (x == nullptr && y == nullptr)
                continue;
                    
            if (x == nullptr || y == nullptr)
                return false;

            if (x->val != y->val)
                return false;

            queue.push(x->left);
            queue.push(y->left);
            queue.push(x->right);
            queue.push(y->right);
        }

        return true;
    }
};