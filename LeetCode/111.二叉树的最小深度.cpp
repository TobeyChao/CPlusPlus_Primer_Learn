///**
// * Definition for a binary tree node.
// * struct TreeNode {
// *     int val;
// *     TreeNode *left;
// *     TreeNode *right;
// *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
// *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
// *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
// * };
// */
//
//struct TreeNode {
//    int val;
//    TreeNode* left;
//    TreeNode* right;
//    TreeNode() : val(0), left(nullptr), right(nullptr) {}
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
//};
//
//#include <algorithm>
//
//class Solution {
//public:
//    int minDepth(TreeNode* root) {
//        if (!root)
//        {
//            return 0;
//        }
//        int left = minDepth(root->left);
//        int right = minDepth(root->right);
//
//        if (!root->left)
//        {
//            return right + 1;
//        }
//        if (!root->right)
//        {
//            return left + 1;
//        }
//        return std::min(left, right) + 1;
//    }
//};