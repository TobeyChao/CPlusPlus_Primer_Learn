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
//
//using namespace std;
//struct TreeNode {
//	int val;
//	TreeNode* left;
//	TreeNode* right;
//	TreeNode() : val(0), left(nullptr), right(nullptr) {}
//	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
//};
//
//#include <stack>
//
//class Solution {
//public:
//	// 1.µÝ¹é
//	/*vector<int> inorderTraversal(TreeNode* root) {
//
//		vector<int> v;
//		inorderTraversal(v, root);
//		return v;
//	}
//
//	void inorderTraversal(vector<int>& v, TreeNode* node)
//	{
//		if (!node)
//		{
//			return;
//		}
//		inorderTraversal(v, node->left);
//		v.push_back(node->val);
//		inorderTraversal(v, node->right);
//	}*/
//
//	// 2.µü´ú1
//	/*vector<int> inorderTraversal(TreeNode* root) {
//
//		vector<int> v;
//
//		stack<TreeNode*> s;
//
//		TreeNode* node = root;
//		while (node)
//		{
//			s.push(node);
//			if (node->left)
//			{
//				node = node->left;
//			}
//			else
//			{
//				v.push_back(s.top()->val);
//				node = s.top();
//				s.pop();
//				if (node->right)
//				{
//					node = node->right;
//				}
//				else
//				{
//					while (!s.empty() && !(s.top()->right))
//					{
//						v.push_back(s.top()->val);
//						node = s.top()->right;
//						s.pop();
//					}
//					if (s.empty())
//					{
//						node = nullptr;
//					}
//					else
//					{
//						v.push_back(s.top()->val);
//						node = s.top()->right;
//						s.pop();
//					}
//				}
//			}
//		}
//
//		return v;
//	}*/
//
//	// 3.µü´ú2
//	vector<int> inorderTraversal(TreeNode* root) {
//		vector<int> res;
//		stack<TreeNode*> s;
//
//		TreeNode* node = root;
//
//		while (node || !s.empty())
//		{
//			while (node)
//			{
//				s.push(node);
//				node = node->left;
//			}
//
//			TreeNode* top = s.top();
//			s.pop();
//			res.push_back(top->val);
//
//			node = top->right;
//		}
//
//		return res;
//	}
//
//private:
//};