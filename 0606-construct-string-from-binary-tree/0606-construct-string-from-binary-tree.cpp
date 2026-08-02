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
    string tree2str(TreeNode* root) {
        if(root==nullptr){
            return "";
        }
        string ans=to_string(root->val);
        string LEFT=tree2str(root->left);  
        string RIGHT=tree2str(root->right);  
        if(root->left!=NULL){
            ans+="("+LEFT+")";
        }
        if(root->right!=NULL){
            if(root->left==NULL){
                ans+="()";
            }
            ans+="("+RIGHT+")";
        }
        return ans;
    }
};