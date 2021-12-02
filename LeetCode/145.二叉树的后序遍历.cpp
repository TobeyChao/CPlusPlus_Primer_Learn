/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

#include <vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        if (!root)
        {
            return {};
        }
        vector<int> ret;
        postorderTraversal(root, ret);
        return ret;
    }

    void postorderTraversal(TreeNode* root, vector<int>& ret) {
        if (root->left)
        {
            postorderTraversal(root->left, ret);
        }
        if (root->right)
        {
            postorderTraversal(root->right, ret);
        }
        ret.push_back(root->val);
    }
};