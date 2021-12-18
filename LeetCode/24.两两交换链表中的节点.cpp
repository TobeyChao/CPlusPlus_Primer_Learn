///**
// * Definition for singly-linked list.
// * struct ListNode {
// *     int val;
// *     ListNode *next;
// *     ListNode() : val(0), next(nullptr) {}
// *     ListNode(int x) : val(x), next(nullptr) {}
// *     ListNode(int x, ListNode *next) : val(x), next(next) {}
// * };
// */
//
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
//	ListNode* swapPairs(ListNode* head) {
//		if (!head || head->next == nullptr)
//		{
//			return head;
//		}
//		ListNode* dummyNode = new ListNode();
//		dummyNode->next = head;
//
//		ListNode* node = dummyNode;
//		while (node && node->next && node->next->next)
//		{
//			ListNode* nodeTmp = node->next;
//			node->next = nodeTmp->next;
//
//			ListNode* nodeTmp2 = nodeTmp->next->next;
//
//			node->next->next = nodeTmp;
//			nodeTmp->next = nodeTmp2;
//
//			node = node->next->next;
//		}
//		return dummyNode->next;
//	}
//};
//
//int main()
//{
//	Solution s;
//	ListNode* node1 = new ListNode(1);
//	ListNode* node2 = new ListNode(2);
//	ListNode* node3 = new ListNode(3);
//	ListNode* node4 = new ListNode(4);
//	node1->next = node2;
//	node2->next = node3;
//	//node3->next = node4;
//	//node4->next = nullptr;
//	ListNode* root = s.swapPairs(node1);
//
//	return 0;
//}