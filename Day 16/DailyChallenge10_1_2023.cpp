#include <iostream>
#include <vector>
using namespace std;


  //Definition for a binary tree node.
  struct TreeNode {
      int val;
      TreeNode *left;
     TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 
class Solution {
    private:
        void inorder(TreeNode* root, vector <int> &ans){
            
            if(root == nullptr){
                ans.push_back(-100000);
                return;
            }
            inorder(root -> left, ans);
            ans.push_back(root -> val);
            inorder(root -> right, ans);
        }

public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
        vector <int> ans1;
        vector <int> ans2;
        inorder(p,ans1);
        inorder(q,ans2);
        if(ans1 == ans2) return true;
        return false;
    }
};

class Solution {

public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
        if(p == nullptr && q == nullptr) return true;
        if(p == nullptr || q == nullptr) return false;
        if(p -> val != q -> val) return false;

        return (isSameTree(p -> right, q -> right)) && (isSameTree(p -> left, q -> left));
    }
};


int main(){
  
  return 0;
}