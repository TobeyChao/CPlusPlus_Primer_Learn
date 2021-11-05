///**
// * Definition for singly-linked list.
// * struct ListNode {
// *     int val;
// *     ListNode *next;
// *     ListNode(int x) : val(x), next(NULL) {}
// * };
// */
//struct ListNode {
//	int val;
//	ListNode *next;
//	ListNode(int x) : val(x), next(nullptr) {}
//};
//class Solution {
//public:
//	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//		int carry = 0;
//		ListNode* res = new ListNode(0);
//		ListNode* top = res;
//		while (l1 || l2)
//		{
//			int sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry;
//			int num = sum;
//			if (sum >= 10)
//			{
//				carry = 1;
//				num = sum % 10;
//			}
//			else
//			{
//				carry = 0;
//			}
//			res->next = new ListNode(num);
//			res = res->next;
//			if (l1)
//			{
//				l1 = l1->next;
//			}
//			if (l2)
//			{
//				l2 = l2->next;
//			}
//		}
//		if (carry != 0)
//		{
//			res->next = new ListNode(carry);
//		}
//		return top->next;
//	}
//};
//int main(int argc, char* argv[])
//{
//	Solution solution;
//	ListNode* l1 = new ListNode(9);
//	ListNode* l1tmp = l1;
//	for (int i = 0; i < 8; i++)
//	{
//		l1tmp->next = new ListNode(9);
//		l1tmp = l1tmp->next;
//	}
//	l1tmp->next = new ListNode(1);
//
//	ListNode* l2 = new ListNode(9);
//
//	ListNode* l = solution.addTwoNumbers(l1, l2);
//
//	return 0;
//}

//#include <iostream>
//#include <vector>
//#include <unordered_map>
//
//using namespace std;

//class Solution {
//public:
//	vector<int> twoSum(vector<int>& nums, int target) {
//		vector<int> ret;
//		for (size_t i = 0; i < nums.size(); i++)
//		{
//			for (size_t j = i + 1; j < nums.size(); j++)
//			{
//				if (nums[i] + nums[j] == target)
//				{
//					ret.push_back(i);
//					ret.push_back(j);
//					return ret;
//				}
//			}
//		}
//		return ret;
//	}
//};
//
//class Solution {
//public:
//	vector<int> twoSum(vector<int>& nums, int target) {
//		unordered_map<int, int> m;
//		for (int i = 0; i < nums.size(); i++)
//		{
//			auto it = m.find(target - nums[i]);
//			if (it != m.end())
//			{
//				return { i, it->second };
//			}
//			m.insert({ nums[i], i });
//		}
//		return {};
//	}
//};
//
//int main()
//{
//	Solution s;
//	vector<int> v{ 3, 2, 4 };
//	auto v2 = s.twoSum(v, 6);
//	return 0;
//}