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
    void solve(TreeNode* root, vector<int>& leavenode) {
    if (root == nullptr) {
        return ;
    }
        if (root->left == nullptr && root->right == nullptr) {
            leavenode.push_back(root->val);
            return;
        }
        solve(root->left,leavenode);
        solve(root->right,leavenode);
   }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>leavenode1,leavenode2;
        solve(root1,leavenode1);
        solve(root2,leavenode2);
        return leavenode1==leavenode2;
    }
};