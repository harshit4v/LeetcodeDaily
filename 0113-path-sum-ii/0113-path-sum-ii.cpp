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
    
    void fill(TreeNode *root,int sum,vector<int>temp,int &targetSum,vector<vector<int>>&result){
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
        fill(root->left,sum,temp,targetSum,result);
        fill(root->right,sum,temp,targetSum,result);
        //temp.pop_back()         ->if we didnt pass a  reference 

    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int>temp;
        vector<vector<int>>result;
        // int sum=0;
        fill(root,0,temp,targetSum,result);
        return result;
    }
};