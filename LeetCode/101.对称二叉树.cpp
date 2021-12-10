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
//#include <queue>
//
//using namespace std;
//
//class Solution {
//public:
//    bool isSymmetric(TreeNode* root) {
//        if (!root)
//        {
//            return false;
//        }
//
//        queue<TreeNode*> q1;
//        queue<TreeNode*> q2;
//
//        q1.push(root->left);
//        q2.push(root->right);
//
//        while (!q1.empty() && !q2.empty())
//        {
//            TreeNode* l = q1.front();
//            TreeNode* r = q2.front();
//
//            if ((l == nullptr && r != nullptr) ||
//                (r == nullptr && l != nullptr) ||
//                (l != nullptr && r != nullptr && l->val != r->val))
//            {
//                return false;
//            }
//
//            q1.pop();
//            q2.pop();
//
//            if (l)
//            {
//                q1.push(l->left);
//                q1.push(l->right);
//            }
//            if (r)
//            {
//                q2.push(r->right);
//                q2.push(r->left);
//            }
//        }
//        return true;
//    }
//};