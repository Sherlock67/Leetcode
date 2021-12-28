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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == NULL && q == NULL){
            return true;
        }
         else if(p == NULL && q != NULL){
            return false;
        }
        else if(p != NULL && q == NULL){
            return false;
        }
        //checking for left subtree
        else if(p->left == NULL && q->left != NULL){
            return false;
        }
        else if(p->left != NULL && q->left==NULL){
            return false;
        }
        // checking for rightsubtree
        else if(p->right == NULL && q->right != NULL){
            return false;
        }
        else if(p->right != NULL && q->right == NULL){
            return false;
        }
        */else if(p->val != q->val){
            return false;
        }
        else if(p->val == q->val){
            return true;
        }
        else if(p->right->val != q->right->val){
            return false;
        }
        else if(p->left->val != q->left->val){
            return false;
        }
        else if(p->right->val == q->right->val){
            return true;
        }
         else if(p->left->val == q->left->val){
            return true;
        }
        
        return true;
    }
};
