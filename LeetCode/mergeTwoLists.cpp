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
//	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
//		ListNode* res = new ListNode(0);
//		ListNode* tmp = res;
//		while (l1 && l2)
//		{
//			if (l1->val <= l2->val)
//			{
//				tmp->next = new ListNode(l1->val);
//				tmp = tmp->next;
//				l1 = l1->next;
//			}
//			else
//			{
//				tmp->next = new ListNode(l2->val);
//				tmp = tmp->next;
//				l2 = l2->next;
//			}
//		}
//		//把剩下的数字补上
//		ListNode* tmpRemain = l1 ? l1 : l2;
//		while (tmpRemain)
//		{
//			tmp->next = new ListNode(tmpRemain->val);
//			tmp = tmp->next;
//			tmpRemain = tmpRemain->next;
//		}
//		return res->next;
//	}
//};
//
//int main(int argc, char* argv[])
//{
//	Solution s;
//	ListNode* l1 = new ListNode(0);
//	ListNode* l1Tmp = l1;
//
//	ListNode* l2;
//
//	ListNode* l3 = s.mergeTwoLists(l1, l2);
//
//}
