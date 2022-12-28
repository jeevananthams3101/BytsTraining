/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isSameTree(struct TreeNode* p, struct TreeNode* q){
    int lp,rp;
    if(p==NULL && q==NULL)
        return 1;
    if(p==NULL || q==NULL)
        return 0;
    if(p->val!=q->val)
        return 0;
    lp=isSameTree(p->left,q->left);
    rp=isSameTree(p->right,q->right);
    return lp&&rp;
}