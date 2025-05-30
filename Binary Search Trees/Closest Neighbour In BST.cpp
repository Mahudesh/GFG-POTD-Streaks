class Solution {
  public:
  void helper(Node* root, int k, int& ans)
  {
      if(!root)
      return;
      
      if(root->data<=k)
      {
          ans=root->data;
          helper(root->right,k,ans);
      }
      else
      {
          helper(root->left,k,ans);
      }
  }
    int findMaxFork(Node* root, int k)
    {
        // code here
        int ans=-1;
        helper(root,k,ans);
        return ans;
        
    }
};
