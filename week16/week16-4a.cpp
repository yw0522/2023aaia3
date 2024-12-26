class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==nullptr)return 0;
        int ans1=maxDepth(root->right);
        int ans2=maxDepth(root->left);
        return max(ans1,ans2)+1;
    }
};
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