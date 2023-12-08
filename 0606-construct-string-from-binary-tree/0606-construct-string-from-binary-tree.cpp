class Solution {
public:
    string tree2str(TreeNode* root) {
        if(root == NULL)
        {
            return "";
        } 
        string str = to_string(root->val);          
        if(root->left)
        {
            str += "(" +  tree2str(root->left) + ")";
        }
        else if(root->right)
        {
            str += "()"; 
        }
        if(root->right)
        {
            str += "(" + tree2str(root->right) + ")"; 
        }
        return str;
    }
};