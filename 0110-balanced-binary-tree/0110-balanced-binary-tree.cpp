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
    bool isBalanced(TreeNode* root) {
        return maxDepth(root) != -1;
    }
    int maxDepth(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int L = maxDepth(root->left);
        int R = maxDepth(root->right);

        if(L==-1){
            return -1;
        }
        if(R==-1){
            return -1;
        }
        if(abs(L-R)>1){
            return -1;
        }

        return max(L,R) +1;
    }
};