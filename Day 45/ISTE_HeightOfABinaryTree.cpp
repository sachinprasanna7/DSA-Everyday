
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  
  return 0;
}
class Node {
    int data;
    Node* left;
    Node* right;
};


    int height(Node* root) {
        
        if(root == nullptr)
            return -1;
        
        return max(height(root -> right), height(root -> left)) + 1;
    }