class Solution {
public:
    
    int res = 0;
    
    int height(TreeNode* root){
        if(root == NULL)
            return 0;
        
        int lh = height( root-> left);
        int rh = height( root-> right);
        
        res = max(res, 1+lh+rh);
        
        return 1+ max(lh, rh);
        
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        int data = height(root);
        return res-1;
    }
};