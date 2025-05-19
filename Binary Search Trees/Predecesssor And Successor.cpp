class Solution {
  public:
  void predecessor(Node* root, int key,Node*& temp)
  {
      if(!root)
      return;
      
      if(root->data<key)
      {
          temp=root;
          predecessor(root->right,key,temp);
      }
      else
      {
          predecessor(root->left,key,temp);
      }
  }
  void successor(Node* root, int key, Node*& temp)
  {
      if(!root)
      return;
      
      if(root->data>key)
      {
          temp=root;
          successor(root->left,key,temp);
      }
      else
      {
          successor(root->right,key,temp);
      }
  }
    vector<Node*> findPreSuc(Node* root, int key)
    {
        // code here
        vector<Node*>ans;
        Node* temp=nullptr;
        predecessor(root,key,temp);
        ans.push_back(temp);
        temp=nullptr;
        successor(root,key,temp);
        ans.push_back(temp);
        return ans;
    }
};
