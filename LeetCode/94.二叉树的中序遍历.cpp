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
//	vector<int> inorderTraversal(TreeNode* root) {
//
//		//vector<int> v;
//		//inorderTraversal(v, root);
//		//return v;
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
//	}
//
//private:
//	void inorderTraversal(vector<int>& v, TreeNode* node)
//	{
//		if (!node)
//		{
//			return;
//		}
//		inorderTraversal(v, node->left);
//		v.push_back(node->val);
//		inorderTraversal(v, node->right);
//	}
//};
//
//
//int main()
//{
//
//}