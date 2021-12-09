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
//#include <vector>
//
//using namespace std;
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
//class Solution {
//public:
//    vector<int> postorderTraversal(TreeNode* root) {
//        if (!root)
//        {
//            return {};
//        }
//        vector<int> ret;
//        postorderTraversal(root, ret);
//        return ret;
//    }
//
//    void postorderTraversal(TreeNode* root, vector<int>& ret) {
//        if (root->left)
//        {
//            postorderTraversal(root->left, ret);
//        }
//        if (root->right)
//        {
//            postorderTraversal(root->right, ret);
//        }
//        ret.push_back(root->val);
//    }
//};
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
//class Solution {
//public:
//	vector<int> postorderTraversal(TreeNode* root) {
//		if (!root)
//		{
//			return {};
//		}
//		vector<int> ret;
//		stack<TreeNode*> s;
//		stack<TreeNode*> sTmp;
//		while (root)
//		{
//			sTmp.push(root);
//			root = root->right;
//		}
//		s = sTmp;
//		pushRight(sTmp, s);
//
//		while (!s.empty())
//		{
//			ret.push_back(s.top()->val);
//			s.pop();
//		}
//		return ret;
//	}
//
//	void pushRight(stack<TreeNode*>& sTmp, stack<TreeNode*>& s) {
//		while (!sTmp.empty())
//		{
//			auto* node = sTmp.top();
//			sTmp.pop();
//			if (node->left)
//			{
//				TreeNode* leftNode = node->left;
//				while (leftNode)
//				{
//					sTmp.push(leftNode);
//					s.push(leftNode);
//					leftNode = leftNode->right;
//				}
//			}
//		}
//	}
//};