///**
// * Definition for singly-linked list.
// * struct ListNode {
// *     int val;
// *     ListNode *next;
// *     ListNode(int x) : val(x), next(NULL) {}
// * };
// */
//
//#include <cstddef>
//
//struct ListNode {
//    int val;
//    ListNode* next;
//    ListNode(int x) : val(x), next(NULL) {}
//};
//
//class Solution {
//public:
//    bool hasCycle(ListNode* head) {
//        ListNode* f = head;
//        ListNode* s = head;
//        do
//        {
//            if (!f || !s || !f->next || !s->next)
//            {
//                return false;
//            }
//            f = f->next;
//            s = s->next->next;
//        } while (f != s);
//        return true;
//    }
//};