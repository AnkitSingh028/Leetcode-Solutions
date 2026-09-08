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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL)return root;
        if(root->val>key)root->left = deleteNode(root->left,key);
        else if(root->val<key)root->right = deleteNode(root->right,key);
        else{
            // 2 children
            if(root->left && root->right){
                TreeNode* curr = max(root->left);
                root->val = curr->val;
                root->left = deleteNode(root->left,curr->val);
            }
            // 1 child
            else if(!root->left)return root->right;
            else if(!root->right)return root->left;
            // 0 child
            else return NULL;
        }
        return root;
    }
    TreeNode* max(TreeNode* root){
        while(root->right)root=root->right;
        return root;
    }
};