// LeetCode
// 938. Range Sum of BST

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
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(!root) return 0;
        int currval = (root->val >= low && root->val <= high) ? root->val : 0;
        int leftsum = rangeSumBST(root->left, low, high);
        int rightsum = rangeSumBST(root->right, low, high);
        return currval + leftsum + rightsum;
    }
};