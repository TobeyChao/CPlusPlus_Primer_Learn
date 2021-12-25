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
//struct TreeNode {
//	int val;
//	TreeNode* left;
//	TreeNode* right;
//	TreeNode() : val(0), left(nullptr), right(nullptr) {}
//	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
//};
//
//#include <algorithm>
//
//using namespace std;
//
//class Solution {
//public:
//	bool isValidBST(TreeNode* root) {
//		int a, b;
//		int ret = isValidBST(root, &a, &b);
//		return ret != -1;
//	}
//
//	int isValidBST(TreeNode* root, int* min, int* max) {
//		// 空树
//		if (!root)
//		{
//			return 0;
//		}
//
//		int minLeft = 0;
//		int maxLeft = 0;
//		int left = isValidBST(root->left, &minLeft, &maxLeft);
//		if (left == -1)
//		{
//			return -1;
//		}
//
//		int maxRight = 0;
//		int minRight = 0;
//		int right = isValidBST(root->right, &minRight, &maxRight);
//		if (right == -1)
//		{
//			return -1;
//		}
//
//		int curVal = root->val;
//		if (left == 0 && right == 0)
//		{
//			*min = *max = curVal;
//			return 1;
//		}
//		if (right == 0 && left != 0)
//		{
//			// 左孩子最大值大于本值
//			if (maxLeft >= curVal)
//			{
//				return -1;
//			}
//			else
//			{
//				*min = minLeft;
//				*max = curVal;
//				return 1;
//			}
//		}
//
//		if (right != 0 && left == 0)
//		{
//			// 右孩子最小值小于本值
//			if (minRight <= curVal)
//			{
//				return -1;
//			}
//			else
//			{
//				*min = curVal;
//				*max = maxRight;
//				return 1;
//			}
//		}
//
//		if (right != 0 && left != 0)
//		{
//			if (minRight <= curVal || maxLeft >= curVal)
//			{
//				return -1;
//			}
//			else
//			{
//				*min = minLeft;
//				*max = maxRight;
//				return 1;
//			}
//		}
//
//		return 1;
//	}
//};
//
//int main()
//{
//	TreeNode* root = new TreeNode(2);
//	root->left = new TreeNode(2);
//	root->right = new TreeNode(2);
//	Solution s;
//	s.isValidBST(root);
//}