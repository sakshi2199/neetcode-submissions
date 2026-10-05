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
    int treeHeight (TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        int lh = treeHeight(root->left);
        int rh = treeHeight(root->right);

        int diff = abs(lh - rh);

        if (diff > 1 || lh == -1 || rh == -1) {
            return -1;
        }
        return 1+max(lh, rh);
    }

    bool isBalanced(TreeNode* root) {
        if (treeHeight(root) == -1) return false;
        else return true; 
    }
};
