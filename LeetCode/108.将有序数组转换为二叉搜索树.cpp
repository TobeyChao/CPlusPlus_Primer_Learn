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
//#include <vector>
//
//using namespace std;
//
//struct TreeNode {
//	int val;
//	TreeNode* left;
//	TreeNode* right;
//	TreeNode() : val(0), left(nullptr), right(nullptr) {}
//	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
//};
//
//
//class Solution {
//public:
//	TreeNode* sortedArrayToBST(vector<int>& nums) {
//
//		return sortedArrayToBST(nums, 0, nums.size() - 1);
//	}
//
//private:
//	TreeNode* sortedArrayToBST(vector<int>& nums, int l, int r) {
//		if (l > r)
//		{
//			return nullptr;
//		}
//		int index = l + (r - l) / 2;
//		TreeNode* node = new TreeNode(nums[index]);
//		node->left = sortedArrayToBST(nums, l, index - 1);
//		node->right = sortedArrayToBST(nums, index + 1, r);
//		return node;
//	}
//};
//
//int main()
//{
//	Solution s;
//	vector<int> v{ -10,-3,0,5,9 };
//	auto* node = s.sortedArrayToBST(v);
//	return 0;
//}