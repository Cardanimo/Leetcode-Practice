class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        recurTree(root);
        return root;
    }
    
    void recurTree(TreeNode* root) {
        if (root) {
            swap(root->left, root->right);
            recurTree(root->left);
            recurTree(root->right);
        }
    }
};