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
//#include <unordered_map>
//
//using namespace std;
//
//class Solution {
//public:
//    // ·¨1£º
//    /*int pathSum(TreeNode* root, int targetSum) {
//        if (!root)
//        {
//            return 0;
//        }
//        int sum = 0;
//
//        vector<int> q;
//        find(q, root, 0, targetSum, sum);
//        return sum;
//    }
//
//    void find(vector<int> path, TreeNode* node, int curSum, int targetSum, int& result)
//    {
//        if (!node)
//        {
//            return;
//        }
//
//        path.push_back(0);
//        for (int i = 0; i < path.size(); i++)
//        {
//            path[i] += node->val;
//            if (path[i] == targetSum)
//            {
//                result++;
//            }
//        }
//
//        find(path, node->left, curSum, targetSum, result);
//        find(path, node->right, curSum, targetSum, result);
//    }*/
//
//    //·¨2:
//    int pathSum(TreeNode* root, int targetSum) {
//        if (!root)
//        {
//            return 0;
//        }
//        int sum = 0;
//
//        unordered_map<int, int> m;
//        m[0] = 1;
//        find(m, root, 0, targetSum, sum);
//        return sum;
//    }
//
//    void find(unordered_map<int, int>& path, TreeNode* node, int curSum, int targetSum, int& result)
//    {
//        if (!node)
//        {
//            return;
//        }
//        curSum += node->val;
//
//        if (path.count(curSum - targetSum))
//        {
//            result += path[curSum - targetSum];
//        }
//
//        path[curSum]++;
//
//        find(path, node->left, curSum, targetSum, result);
//        find(path, node->right, curSum, targetSum, result);
//
//        path[curSum]--;
//    }
//};
//
//#include <unordered_map>
//
//int main()
//{
//    TreeNode* root = new TreeNode(0);
//    TreeNode* root1 = new TreeNode(1);
//    TreeNode* root2 = new TreeNode(1);
//    TreeNode* root3 = new TreeNode(4);
//    TreeNode* root4 = new TreeNode(5);
//    root->left = root1;
//    root->right = root2;
//    //root1->left = root3;
//    //root1->right = root4;
//    Solution s;
//    int sum = s.pathSum(root, 1);
//    return 0;
//}