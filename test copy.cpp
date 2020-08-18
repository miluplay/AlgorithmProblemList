/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
#include <algorithm>
#include <cstring>
using namespace std;
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
 public:
  int arr[11111], len = 0;
  bool isBalanced(TreeNode *root) {
    if (root == NULL) return true;
    root->val = 0;
    MarkNode(root);
    sort(arr, arr + len);
    if (len == 1) {
      if (arr[0] <= 1)
        return true;
      else
        return false;
    } else if (arr[len - 1] - arr[0] <= 1)
      return true;
    else
      return false;
  }
  void MarkNode(TreeNode *a) {
    if (a->left == NULL && a->right == NULL) {
      arr[len++] = a->val;
      return;
    }
    if (a->left != NULL) {
      TreeNode *LeftChild = a->left;
      LeftChild->val = a->val + 1;
      MarkNode(LeftChild);
    }
    if (a->right != NULL) {
      TreeNode *RightChild = a->right;
      RightChild->val = a->val + 1;
      MarkNode(RightChild);
    }
  }
};

int main() {
  TreeNode *Head = new TreeNode(1);
  TreeNode *Temp = new TreeNode(2);
  Head->left = Temp;
  // TreeNode *Temp2 = new TreeNode(2);
  // Head->right->right = Temp2;
  Solution Ans;
  Ans.isBalanced(Head);
  return 0;
}