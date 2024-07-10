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
    void preorder(TreeNode* root, vector<int>&preorderAns){
        if(root==NULL){
            return;
        }
        preorderAns.push_back(root->val);
        preorder(root->left,preorderAns);
        preorder(root->right,preorderAns);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
        if(root==NULL){
            return ans;
        }
        vector<int>preorderAns;
        preorder(root,preorderAns);
        for(auto i:preorderAns){
            ans.push_back(i);
        }
        return ans;
    }
};