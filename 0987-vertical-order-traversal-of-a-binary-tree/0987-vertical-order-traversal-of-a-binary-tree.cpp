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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>>ans;
        map<int,vector<int>>mp;
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        while(!q.empty()){
            int size=q.size();
            map<int,vector<int>>temp;
            while(size--){
                TreeNode * node=q.front().first;
                int col=q.front().second;
                q.pop();
                temp[col].push_back(node->val);
                if(node->left){
                    q.push({node->left,col-1});
                }
                if(node->right){
                    q.push({node->right,col+1});
                }
            }
            for (auto it : temp) {
                sort(it.second.begin(), it.second.end());
                for (int val : it.second) {
                    mp[it.first].push_back(val);
                }
            }
        }
        for(auto it:mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};