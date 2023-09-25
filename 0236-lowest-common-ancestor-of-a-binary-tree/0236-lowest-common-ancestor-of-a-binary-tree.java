class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;
    TreeNode(int val) {
        this.val = val;
    }
}

public class Solution {
    public TreeNode lowestCommonAncestor(TreeNode root, TreeNode p, TreeNode q) {
        // Base case: If the root is null, return null.
        if (root == null) {
            return null;
        }
        
        // If either p or q is equal to the current root, then the current root is the LCA.
        if (root == p || root == q) {
            return root;
        }
        
        // Recursively search for LCA in the left and right subtrees.
        TreeNode leftLCA = lowestCommonAncestor(root.left, p, q);
        TreeNode rightLCA = lowestCommonAncestor(root.right, p, q);
        
        // If both leftLCA and rightLCA are not null, it means p and q are found in different subtrees,
        // so the current root is the LCA.
        if (leftLCA != null && rightLCA != null) {
            return root;
        }
        
        // If only one of leftLCA or rightLCA is not null, return that non-null value as the LCA.
        return (leftLCA != null) ? leftLCA : rightLCA;
    }
}
