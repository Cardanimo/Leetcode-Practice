class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == NULL){
            return false;
        }
        if(root->right==NULL && root->left==NULL && root->val==targetSum){
            return true;
        }
        bool lpath = hasPathSum(root->left,targetSum-root->val);
        bool rpath = hasPathSum(root->right,targetSum-root->val);
        return lpath||rpath;
    }
};