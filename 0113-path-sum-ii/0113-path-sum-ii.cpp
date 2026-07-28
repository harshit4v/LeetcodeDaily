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


    //if we reach the leaf and our sum != target we popback out last node but here me didnt made the temp pass as of reference so it did the same we can also use temp.pop_bakc()
    vector<vector<int>>result;
    void fill(TreeNode *root,int sum,vector<int>temp,int &targetSum){
        if(root==NULL){
            return;
        }
        sum+=root->val;
        temp.push_back(root->val);
        if(root->left==NULL && root->right==NULL){
            if(sum==targetSum){
                result.push_back(temp);
            }
            //temp.pop_back()         ->if we didnt pass a  reference 
            return;
        }
        fill(root->left,sum,temp,targetSum);
        fill(root->right,sum,temp,targetSum);
        //temp.pop_back()         ->if we didnt pass a  reference 

    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int>temp;
        int sum=0;
        fill(root,sum,temp,targetSum);
        return result;
    }
};