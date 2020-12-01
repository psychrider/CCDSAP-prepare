class Solution {
	public: TreeNode* invertNode(TreeNode* root) {
    	TreeNode * parent = root;	
      	if(root == NULL){return;}
        invertNode(root->left);
        invertNode(root->right);      
        TreeNode * temp = root->right;
        root->right = root->left;
        root->left = temp;
        return root;     
    }
}