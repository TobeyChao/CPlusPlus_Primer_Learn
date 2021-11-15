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
//    int val;
//    ListNode* next;
//    ListNode() : val(0), next(nullptr) {}
//    ListNode(int x) : val(x), next(nullptr) {}
//    ListNode(int x, ListNode* next) : val(x), next(next) {}
//};
//class Solution {
//public:
//    //ListNode* reverseList(ListNode* head) {
//    //    ListNode* newhead = nullptr;
//    //    reverse(head, nullptr, &(newhead));
//    //    return newhead;
//    //}
//
//    //ListNode* reverse(ListNode* node, ListNode* nodePrev, ListNode** newHead)
//    //{
//    //    if (!node)
//    //    {
//    //        *newHead = nodePrev;
//    //        return nodePrev;
//    //    }
//    //    ListNode* newNode = reverse(node->next, node, newHead);
//    //    newNode->next = nodePrev;
//    //    return nodePrev;
//    //}
//    ListNode* reverseList(ListNode* head) {
//        ListNode* newhead = nullptr;
//
//        ListNode* it = head;
//        while (it)
//        {
//            ListNode* newIt = it->next;
//
//            it->next = newhead;
//            newhead = it;
//
//            it = newIt;
//        }
//
//        return newhead;
//    }
//};
//
//int main()
//{
//    ListNode* node = new ListNode(2);
//    node->next = new ListNode(3);
//    node->next->next = new ListNode(4);
//    node->next->next->next = new ListNode(5);
//	Solution s;
//    ListNode* head = s.reverseList(node);
//	return 0;
//}