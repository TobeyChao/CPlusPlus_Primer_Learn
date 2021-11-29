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
//#include <stack>
//
//using namespace std;
//
//struct ListNode {
//    int val;
//    ListNode* next;
//    ListNode() : val(0), next(nullptr) {}
//    ListNode(int x) : val(x), next(nullptr) {}
//    ListNode(int x, ListNode* next) : val(x), next(next) {}
//};
//
//class Solution {
//public:
//    ListNode* removeNthFromEnd(ListNode* head, int n) {
//        ListNode* dummyNode = new ListNode();
//        dummyNode->next = head;
//
//        stack<ListNode*> s;
//        ListNode* node = dummyNode;
//        while (node)
//        {
//            s.push(node);
//            node = node->next;
//        }
//
//        ListNode* todel = nullptr;
//        while (n)
//        {
//            todel = s.top();
//            s.pop();
//            --n;
//        }
//        ListNode* pre = s.top();
//        pre->next = todel->next;
//        return dummyNode->next;
//    }
//};
//
//int main()
//{
//    ListNode* node = new ListNode(1);
//    node->next = new ListNode(2);
//    node->next->next = new ListNode(3);
//    Solution s;
//    auto* head = s.removeNthFromEnd(node, 1);
//    return 0;
//}