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
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int maxm = INT_MIN,d1=1,d=1;
        while(!q.empty()){
            int n = q.size(), s = 0;
            for(int i=0;i<n;i++){
                TreeNode* curr = q.front();
                q.pop();
                s+=curr->val;
                if(curr->left)q.push(curr->left);
                if(curr->right)q.push(curr->right);
                cout << s << "\n";
            }
            if(maxm<s){
                maxm = s;
                d1 = d;
            }
            d++;
        }
        return d1;
    }
};