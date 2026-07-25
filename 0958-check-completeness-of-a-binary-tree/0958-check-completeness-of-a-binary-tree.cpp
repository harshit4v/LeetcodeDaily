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
    bool isCompleteTree(TreeNode* root) {
        //USING BFS
        /*queue<TreeNode*>q;
        q.push(root);
        bool past=false;
        while(!q.empty()){
            TreeNode *node=q.front();
            q.pop();
            if(node==NULL){
                past=true;
            }else{
                if(past==true){
                    return false;
                }
            q.push(node->left);
            q.push(node->right);
            }
        }
        return true;*/
        

        //USING DFS
        //LEFT CHILD=2*i
        //RIGHT CHILD=2*i+1
        //if(index>total count of node) to complete binary tree nahi hai warna hai 
        
        int totalnodes=countNodes(root);
        int i=1;
        return dfs(root,i,totalnodes);
    }

    int countNodes(TreeNode *node){
        if(node==NULL){
            return 0;
        }
        return 1+countNodes(node->left)+countNodes(node->right);
    }
    bool dfs(TreeNode* root,int i,int totalnodes){
        if(root==NULL){
            return true;
        }
        if(i>totalnodes){
            return false;
        }
        return dfs(root->left,2*i,totalnodes) && dfs(root->right,2*i+1,totalnodes);
    }
};