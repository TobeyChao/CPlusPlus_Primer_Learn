///**
// * Definition for binary tree
// * struct TreeNode {
// *     int val;
// *     TreeNode *left;
// *     TreeNode *right;
// *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
// * };
// */
//#include <vector>
//
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//};
////{1, 2, 4, 7, 3, 5, 6, 8} { 4,7,2,1,5,3,8,6 }，
//class Solution
//{
//public:
//	TreeNode* reConstructBinaryTree(std::vector<int> pre, std::vector<int> vin)
//	{
//		if (pre.empty() || vin.empty() || pre.size() != vin.size())
//		{
//			return nullptr;
//		}
//		return Construct(pre.begin(), pre.end() - 1, vin.begin(), vin.end() - 1);
//	}
//
//	TreeNode* Construct(
//		std::vector<int>::iterator pre_begin,
//		std::vector<int>::iterator pre_end, 
//		std::vector<int>::iterator vin_begin, 
//		std::vector<int>::iterator vin_end)
//	{
//		//根节点的值
//		int rootValue = *pre_begin;
//		//创建根节点
//		TreeNode* root = new TreeNode(*pre_begin);
//		root->left = root->right = nullptr;
//
//		//递归结束条件
//		if (pre_begin == pre_end)
//		{
//			if (vin_begin == vin_end && *pre_begin == *vin_begin)
//			{
//				return root;
//			}
//			else
//			{
//				return nullptr;
//			}
//		}
//
//		//寻找中序的根节点
//		auto root_vin = vin_begin;
//		while (root_vin <= vin_end && *root_vin != rootValue)
//		{
//			++root_vin;
//		}
//
//		if (root_vin == vin_end && *root_vin != rootValue)
//		{
//			return nullptr;
//		}
//
//		//构建左子树
//		int left_length = root_vin - vin_begin;
//
//		if (left_length > 0)
//		{
//			root->left = Construct(pre_begin + 1, pre_begin + left_length,
//				vin_begin, root_vin - 1);
//		}
//		//构建右子树
//		if (left_length < pre_end - pre_begin)
//		{
//			root->right = Construct(pre_begin + left_length + 1, pre_end,
//				root_vin + 1, vin_end);
//		}
//		return root;
//	}
//};
//
//int main(int argc, char* argv[])
//{
//	Solution solution;
//	TreeNode* top = solution.reConstructBinaryTree({ 1, 2, 4, 7, 3, 5, 6, 8 }, { 4, 7, 2, 1, 5, 3, 8, 6 });
//
//	return 0;
//}
