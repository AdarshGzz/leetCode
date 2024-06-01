/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    bool symmetryCheck(TreeNode* L, TreeNode* R) {
        if (L == NULL && R == NULL) {
            return true;
        }
        if (L == NULL || R == NULL) {
            return false;
        }

        return (L->val == R->val) && symmetryCheck(L->left, R->right) &&
               symmetryCheck(L->right, R->left);
    }

    bool isSymmetric(TreeNode* root) {
        if (root == NULL) {
            return true;
        }
        return symmetryCheck(root->left, root->right);
    }
};