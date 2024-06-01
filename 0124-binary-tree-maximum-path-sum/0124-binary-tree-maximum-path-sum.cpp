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
   int maxSum(TreeNode* root, int& x) {
    if (root == NULL) {
        return 0;
    }

    // Recursively get the maximum path sum of left and right subtrees
    int L = max(0, maxSum(root->left, x));
    int R = max(0, maxSum(root->right, x));

    // Update the maximum path sum using the current node value and the sums from left and right subtrees
    x = max(x, root->val + L + R); 

    // Return the maximum path sum including the current node
    return root->val + max(L, R);
}

int maxPathSum(TreeNode* root) {
    int ans = INT_MIN;
    maxSum(root, ans);
    return ans;
}
};