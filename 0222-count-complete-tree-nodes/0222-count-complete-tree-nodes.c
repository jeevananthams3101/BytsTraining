/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int countNodes(struct TreeNode* root){
    if(root==NULL)
        return 0;
    int lst=countNodes(root->left);
    int rst=countNodes(root->right);
    return 1+lst+rst;
}