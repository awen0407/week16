// week16-3.cpp 學習計畫 Binary Tree 隱藏版
// leetcode 94
 class Solution {
 public:
    void helper(TreeNode* root, vector<int>& ans){
    if(root==nullptr) return;
    helper(root->left,ans);
    ans.push_back(root->val);
    helper(root->right,ans);
    }
    vector<int> inorderTraversal(TreeNode* root){
        vector<int> ans;
        helper(root, ans);
        return ans;
    }
 }