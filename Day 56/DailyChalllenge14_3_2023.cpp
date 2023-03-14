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
    int totalSum(TreeNode *root, int sum)
    {

        if (root == nullptr)
        {
            return 0;
        }

        sum = sum * 10 + root->val;

        if (root->right == nullptr && root->left == nullptr)
            return sum;

        int leftSum = totalSum(root->left, sum);
        int rightSum = totalSum(root->right, sum);

        return leftSum + rightSum;
    }

public:
    int sumNumbers(TreeNode *root)
    {

        return totalSum(root, 0);
    }
};

int main()
{

    return 0;
}