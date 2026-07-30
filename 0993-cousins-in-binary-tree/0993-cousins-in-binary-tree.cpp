/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int levelx = -1, levely = -1;
    TreeNode *parentx = NULL, *parenty = NULL;
    void dfs(TreeNode* root, TreeNode* parent, int level, int x, int y) {
        if (root == NULL) {
            return;
        }
        if (root->val == x) {
            levelx = level;
            parentx = parent;
        }
        if (root->val == y) {
            levely = level;
            parenty = parent;
        }
        dfs(root->left, root, level + 1, x, y);
        dfs(root->right, root, level + 1, x, y);
    }
bool isCousins(TreeNode* root, int x, int y) {
    if (root == NULL) {
        return false;
    }
    dfs(root, NULL, 0, x, y);
    return (levelx == levely && parentx != parenty);
}
}
;