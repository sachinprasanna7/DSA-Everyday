#include <iostream>
#include <vector>
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
    vector <int> ans;
        void inorder(TreeNode* root){
            if(root == nullptr) return;

            inorder(root -> left);
            ans.push_back(root -> val);
            inorder(root -> right);
        }
public:
    int getMinimumDifference(TreeNode* root) {
        inorder(root);
        int answer = INT_MAX;

        for(int i = 1 ; i < ans.size() ; i++){
            int tempAns = ans[i] - ans[i-1];
            answer = min(tempAns, answer);
        }

        return answer;
    }
};

int main(){
  
  return 0;
}