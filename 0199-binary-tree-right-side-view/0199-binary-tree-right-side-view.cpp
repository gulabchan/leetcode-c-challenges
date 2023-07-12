class Solution {
public:
vector<int> res;
  vector<int> rightSideView(TreeNode* root) {
    if(!root) return res;
    queue<TreeNode*> node;
      node.push(root);
      node.push(NULL);
      while(!node.empty()){
      root = node.front(); node.pop();
      if(!root){
      if(!node.empty())
      node.push(NULL);
      }else{
      if(!node.front())
      res.push_back(root->val);
      if(root->left)
      node.push(root->left);
      if(root->right)
      node.push(root->right);
      }
      }
      return res;
      }
};