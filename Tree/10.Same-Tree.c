/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 typedef struct TreeNode* Node;
 int i=1;
bool isSameTree(struct TreeNode* p, struct TreeNode* q) {

 if(q==NULL&&p==NULL)
 return true;
 else if(q!=NULL&&p==NULL)
 return false;
 else if(p!=NULL&&q==NULL)
  return false;
 else if(q->val!=p->val)
  {
    return false;
  }
  
return (isSameTree(p->right,q->right)&& isSameTree(p->left,q->left));



}