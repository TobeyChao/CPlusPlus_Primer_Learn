///**
//*  struct ListNode {
//*        int val;
//*        struct ListNode *next;
//*        ListNode(int x) :
//*              val(x), next(NULL) {
//*        }
//*  };
//*/
//#include <vector>
//#include <stack>
//
//struct ListNode {
//	int val;
//	struct ListNode *next;
//	ListNode(int x) :
//		val(x), next(nullptr) {
//	}
//};
//class Solution {
//public:
//	std::vector<int> printListFromTailToHead(ListNode* head) {
//		std::stack<int> num_stack;
//		ListNode* top = head;
//		while (top)
//		{
//			num_stack.push(top->val);
//			top = top->next;
//		}
//		std::vector<int> vec;
//		while (!num_stack.empty())
//		{
//			vec.push_back(num_stack.top());
//			num_stack.pop();
//		}
//		return vec;
//	}
//};