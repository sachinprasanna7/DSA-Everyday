#include <iostream>
#include <vector>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
private:
    TreeNode *build(vector<int> &inorder, vector<int> &postorder, int inStart, int inEnd, int postEnd)
    {
        if (inStart > inEnd || postEnd < 0)
        {
            return nullptr;
        }

        TreeNode *root = new TreeNode(postorder[postEnd]);

        int inIndex = 0;
        for (int i = inStart; i <= inEnd; i++)
        {
            if (inorder[i] == root->val)
            {
                inIndex = i;
                break;
            }
        }

        root->right = build(inorder, postorder, inIndex + 1, inEnd, postEnd - 1);
        root->left = build(inorder, postorder, inStart, inIndex - 1, postEnd - (inEnd - inIndex) - 1);

        return root;
    }

public:
    TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder)
    {
        return build(inorder, postorder, 0, inorder.size() - 1, postorder.size() - 1);
    }
};

int main()
{

    return 0;
}