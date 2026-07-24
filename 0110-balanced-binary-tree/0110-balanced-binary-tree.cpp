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
    int helper(TreeNode *root){
        if(root==nullptr){
            return 0;
        }
        int maxleft=helper(root->left);
        if(maxleft==-1){
            return -1;
        }
        int maxright=helper(root->right);
        if(maxright==-1){
            return -1;
        }
        if(abs(maxleft-maxright)>1){
            return -1;
        }
        return 1+max(maxleft,maxright);
    }
    bool isBalanced(TreeNode* root) {
        return helper(root)!=-1;
    }
};