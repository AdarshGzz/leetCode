/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    void connectNode(Node* p,Node* q){
        if(p==NULL){
            return;
        }
        p->next = q;
        connectNode(p->left,p->right);
        connectNode(q->left,q->right);
        connectNode(p->right,q->left);
    }
    Node* connect(Node* root) {
        if(root==NULL){
            return NULL;
        }
        connectNode(root->left,root->right);
        return root;
    }
};