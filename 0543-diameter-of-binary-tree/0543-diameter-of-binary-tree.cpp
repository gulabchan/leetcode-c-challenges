class Solution {
private:
    int ans = -INT_MAX;
    int diameter(TreeNode* root) {
        if(!root)
            return 0;
        int left = diameter(root->left);
        int right = diameter(root->right);
        ans = max(ans, left+right);
        return max(left, right) + 1;
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root)
            return 0;
        diameter(root);
        return ans;
    }
};