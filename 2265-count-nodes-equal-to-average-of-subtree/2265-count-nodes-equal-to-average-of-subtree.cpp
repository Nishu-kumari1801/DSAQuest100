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
    int size(TreeNode* root){
        if(root==NULL) return 0;
        int left = size(root->left);
        int right = size(root->right);
        return left+right+1;
    }
    int sum (TreeNode * root){
        if(root== NULL) return 0;
        int leftSum = sum(root->left);
        int rightSum = sum(root->right);
        return leftSum+rightSum+root->val;
    }
    int averageOfSubtree(TreeNode* root) {
        int cnt =0;
        if(root== NULL) return 0;
        int avg = sum(root)/size(root);
        if(root->val == avg) cnt++;
        cnt += averageOfSubtree(root->left);
        cnt += averageOfSubtree(root->right);
        return cnt;
    }
};