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
//#include <vector>
//#include <stack>
//
//using namespace std;
//
//class Solution {
//public:
//    vector<int> preorderTraversal(TreeNode* root) {
//        vector<int> v;
//        stack<TreeNode*> s;
//
//        TreeNode* node = root;
//
//        while (node || !s.empty())
//        {
//            while (node)
//            {
//                v.push_back(node->val);
//                s.push(node);
//                node = node->left;
//            }
//
//            TreeNode* top = s.top();
//            s.pop();
//            node = top->right;
//        }
//
//        return v;
//    }
//};