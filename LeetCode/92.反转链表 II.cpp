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
//	ListNode* reverseBetween(ListNode* head, int left, int right) {
//		if (left == right == 1)
//		{
//			return head;
//		}
//		ListNode* ret = head;
//		ListNode* node = head;
//		int leftTmp = left;
//		// ��ʼ��ת��ǰһ���ڵ�
//		ListNode* nodeReverseBeginNode = node;
//		while (--leftTmp)
//		{
//			nodeReverseBeginNode = node;
//			node = node->next;
//		}
//
//		int reverseCount = right - left;
//
//		ListNode* subhead = node;
//		ListNode* subtail = node;
//		node = node->next;
//		subhead->next = nullptr;
//		for (int i = 0; i < reverseCount; i++)
//		{
//			ListNode* newNode = node;
//			node = node->next;
//			newNode->next = subhead;
//			subhead = newNode;
//		}
//
//		// ��ֹ���ƶ������
//		if (nodeReverseBeginNode != subhead)
//		{
//			// ����β��
//			subtail->next = node;
//			// ����ͷ
//			if (left != 1)
//			{
//				nodeReverseBeginNode->next = subhead;
//			}
//		}
//
//		if (left == 1)
//		{
//			ret = subhead;
//		}
//
//		return ret;
//	}
//};
//
//int main()
//{
//    ListNode* node = new ListNode(1);
//    node->next = new ListNode(2);
//	node->next->next = new ListNode(3);
//	Solution s;
//	s.reverseBetween(node, 2,2);
//	return 0;
//}