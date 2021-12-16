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
//#include <stack>
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
//	// 递归
//	//vector<int> postorderTraversal(TreeNode* root) {
//	//	if (!root)
//	//	{
//	//		return {};
//	//	}
//	//	vector<int> ret;
//	//	postorderTraversal(root, ret);
//	//	return ret;
//	//}
//
//	//void postorderTraversal(TreeNode* root, vector<int>& ret) {
//	//	if (root->left)
//	//	{
//	//		postorderTraversal(root->left, ret);
//	//	}
//	//	if (root->right)
//	//	{
//	//		postorderTraversal(root->right, ret);
//	//	}
//	//	ret.push_back(root->val);
//	//}
//
//	// 迭代1
//	/*vector<int> postorderTraversal(TreeNode* root) {
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
//	}*/
//
//	// 迭代2
//	/*vector<int> postorderTraversal(TreeNode* root) {
//		vector<int> v;
//
//		stack<TreeNode*> helper;
//		TreeNode* prev = nullptr;
//		stack<TreeNode*> s;
//		TreeNode* node = root;
//		while (node || !s.empty())
//		{
//			while (node)
//			{
//				s.push(node);
//				helper.push(node);
//				node = node->left;
//			}
//
//			TreeNode* top = s.top();
//			s.pop();
//			if (!top->right)
//			{
//				if (s.empty())
//				{
//					while (!helper.empty())
//					{
//						v.push_back(helper.top()->val);
//						helper.pop();
//					}
//				}
//				else
//				{
//					while (helper.top() != s.top())
//					{
//						v.push_back(helper.top()->val);
//						helper.pop();
//					}
//				}
//			}
//			node = top->right;
//		}
//		return v;
//	}*/
//
//	// 迭代3单栈
//	vector<int> postorderTraversal(TreeNode* root) {
//		vector<int> v;
//
//		TreeNode* prev = nullptr;
//		stack<TreeNode*> s;
//		TreeNode* node = root;
//		while (node || !s.empty())
//		{
//			while (node)
//			{
//				s.push(node);
//				node = node->left;
//			}
//
//			node = s.top();
//			s.pop();
//			if (!node->right || node->right == prev)
//			{
//				v.push_back(node->val);
//				prev = node;
//				node = nullptr;
//			}
//			else
//			{
//				s.push(node);
//				node = node->right;
//			}
//		}
//		return v;
//	}
//};