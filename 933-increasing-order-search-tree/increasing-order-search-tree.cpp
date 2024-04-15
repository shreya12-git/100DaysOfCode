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
    void InorderTraversal(TreeNode *root,vector<int>&ans){
        if(root==NULL){
            return;
        }
        if(root->left){
            InorderTraversal(root->left,ans);
        }
        ans.push_back(root->val);
        if(root->right){
            InorderTraversal(root->right,ans);
        }
    }
    void buildTree(TreeNode* &root,int val){
        TreeNode* curr=new TreeNode(val);
        if(root==NULL){
            root=curr;
            return;
        }
        TreeNode *temp=root;
        while(temp->right){
            temp=temp->right;
        }
        temp->right=curr;
    }
    TreeNode* increasingBST(TreeNode* root) {
        vector<int>ans;
        InorderTraversal(root,ans);
        sort(ans.begin(),ans.end());
        TreeNode* curr=NULL;
        for(auto i: ans){
            buildTree(curr,i);
        }

        return curr;
        
    }
};