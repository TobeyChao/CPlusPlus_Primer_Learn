//struct ListNode {
//	int val;
//	ListNode* next;
//	ListNode() : val(0), next(nullptr) {}
//	ListNode(int x) : val(x), next(nullptr) {}
//	ListNode(int x, ListNode* next) : val(x), next(next) {}
//};
//
//class Solution {
//public:
//	ListNode* deleteDuplicates(ListNode* head) {
//		ListNode* dummyNode = new ListNode();
//		dummyNode->next = head;
//		ListNode* node = dummyNode;
//		while (node->next)
//		{
//			int val = node->next->val;
//			bool flag = false;
//			while (node->next->next && val == node->next->next->val)
//			{
//				ListNode* toDel = node->next->next;
//				node->next->next = toDel->next;
//				delete toDel;
//				flag = true;
//			}
//			if (flag)
//			{
//				ListNode* toDel = node->next;
//				node->next = toDel->next;
//				delete toDel;
//			}
//			else
//			{
//				node = node->next;
//			}
//		}
//		ListNode* newHead = dummyNode->next;
//		delete dummyNode;
//		return newHead;
//	}
//};
//
//int main()
//{
//	ListNode* node = new ListNode(1);
//	node->next = new ListNode(1);
//	node->next->next = new ListNode(1);
//	node->next->next->next = new ListNode(2);
//	Solution s;
//	s.deleteDuplicates(node);
//	return 0;
//}