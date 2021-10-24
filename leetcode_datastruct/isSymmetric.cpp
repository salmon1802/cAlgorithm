/**
*Created by salmon on 2021-10-24 23:58.
**/


Definition for a binary tree node.
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};


bool traversal(struct TreeNode* left,struct TreeNode *right){
    if(left == NULL && right == NULL){
        return true;
    }
    if(left == NULL || right == NULL) {
        return false;
    }
    if(left->val != right-> val) {
        return false;
    }

    return traversal(left->left, right->right) && traversal(left->right, right->left);
}

bool isSymmetric(struct TreeNode* root){
    if (root == NULL) {
        return true;
    }
    return traversal(root->left, root->right);
}