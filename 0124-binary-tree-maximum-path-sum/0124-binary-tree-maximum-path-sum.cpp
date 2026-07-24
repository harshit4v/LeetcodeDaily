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
    int maxSum;
    int solve(TreeNode*root){
        if(root==NULL)return 0;
        int l=solve(root->left);
        int r=solve(root->right);
        int neeche_hi_ans_milgya=l+r+root->val;//case1
        int koi_ek_acha_hai=max(l,r)+root->val;//case2
        int ek_bhi_acha_nahi_hai=root->val;//case3
        maxSum=max({maxSum,neeche_hi_ans_milgya,koi_ek_acha_hai,ek_bhi_acha_nahi_hai});
        //case1 ko return nhi kr sakte kyuki neeche hi ans mil chuka hai hame , valid path nhi rahega vo
        return max(koi_ek_acha_hai,ek_bhi_acha_nahi_hai);
    }
    int maxPathSum(TreeNode* root) {
        maxSum=INT_MIN;
        solve(root);
        return maxSum;
    }
};