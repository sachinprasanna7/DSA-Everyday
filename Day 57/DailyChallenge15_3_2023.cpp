#include <iostream>
#include <queue>
using namespace std;


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

        bool levelOrderTraversal (TreeNode* root){

            queue <TreeNode*> q;
            q.push(root);

            bool flag = false;

            while(!q.empty()){
                TreeNode* front = q.front();
                q.pop();
                if(front->left){
                    if(flag)
                        return false;

                    q.push(front->left);
                }
                else flag=1;

                if(front->right){
                    if(flag) 
                        return false;
                    q.push(front->right);
                }

                else flag=1;
            }

            return true;

        }

public:
    bool isCompleteTree(TreeNode* root) {
        
        return levelOrderTraversal(root);
    }
};

int main(){
  
  return 0;
}