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
//#include <unordered_map>
//
//using namespace std;
//
//class Solution {
//public:
//    bool isBalanced(TreeNode* root) {
//        if (!root)
//        {
//            return true;
//        }
//        return isBalanced1(root) != -1;
//    }
//
//    int isBalanced1(TreeNode* root)
//    {
//        if (!root)
//        {
//            return 0;
//        }
//
//        int left = isBalanced1(root->left);
//        if (left == -1)
//        {
//            return -1;
//        }
//        int right = isBalanced1(root->right);
//        if (right == -1)
//        {
//            return -1;
//        }
//
//        int self = abs(left - right) <= 1 ? max(left, right) + 1 : -1;
//        return self;
//    }
//};
//
//int main()
//{
//    Solution s;
//    TreeNode* root = new TreeNode(0);
//    root->left = new TreeNode(1);
//    bool is = s.isBalanced(root);
//
//    return 0;
//}