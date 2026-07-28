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

    //o(n^2) soln 
    bool isonepresent(TreeNode *node){
        if(node==NULL){
            return false;
        }
        if(node->val==1){
            return true;
        }
        return isonepresent(node->left)||isonepresent(node->right);
    }
    TreeNode* pruneTree(TreeNode* root) {
        if(root==NULL){
            return NULL;
        }
        if(!isonepresent(root->left)){
            root->left=NULL;
        }
        if(!isonepresent(root->right)){
            root->right=NULL;
        }
        pruneTree(root->left);
        pruneTree(root->right);
        if(root->left==NULL && root->right==NULL && root->val==0){
            return NULL;
        }
        return root;
    }


    //o(n) soln
    // TreeNode* pruneTree(TreeNode* root) {
    //     if(root==NULL){
    //         return NULL;
    //     }
    //     root->left=pruneTree(root->left);
    //     root->right=pruneTree(root->right);
    //     if(root->left==NULL && root->right==NULL && root->val==0){
    //         return NULL;
    //     }
    //     return root;
    // }
};