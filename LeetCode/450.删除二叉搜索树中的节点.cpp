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
//
//class Solution {
//public:
//    TreeNode* deleteNode(TreeNode* root, int key) {
//        if (!root)
//        {
//            return nullptr;
//        }
//        if (root->val == key)
//        {
//            TreeNode* leftMax = findMax(root->left);
//            if (leftMax == nullptr)
//            {
//                return root->right;
//            }
//            else
//            {
//                leftMax->right = root->right;
//                return root->left;
//            }
//        }
//        else
//        {
//            TreeNode* node = root;
//            TreeNode* pre = root;
//            bool preIsLeft = false;
//            while (node->val != key)
//            {
//                pre = node;
//                if (key > node->val)
//                {
//                    preIsLeft = false;
//                    node = node->right;
//                }
//                else
//                {
//                    preIsLeft = true;
//                    node = node->left;
//                }
//                if (!node)
//                {
//                    return root;
//                }
//            }
//            TreeNode* leftMax = findMax(node->left);
//            if (leftMax == nullptr)
//            {
//                if (preIsLeft)
//                {
//                    pre->left = node->right;;
//                }
//                else
//                {
//                    pre->right = node->right;
//                }
//            }
//            else
//            {
//                leftMax->right = node->right;
//                if (preIsLeft)
//                {
//                    pre->left = node->left;;
//                }
//                else
//                {
//                    pre->right = node->left;
//                }
//            }
//            return root;
//        }
//    }
//
//    TreeNode* findMax(TreeNode* node)
//    {
//        TreeNode* tmp = node;
//        while (tmp && tmp->right)
//        {
//            tmp = tmp->right;
//        }
//        return tmp;
//    }
//};