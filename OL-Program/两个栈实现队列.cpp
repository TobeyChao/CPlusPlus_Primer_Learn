//#include <stack>
//
//class Solution
//{
//public:
//	void push(int node) {
//		stack1.push(node);
//	}
//
//	int pop() {
//		if (!stack2.empty())
//		{
//			int val = stack2.top();
//			stack2.pop();
//			return val;
//		}
//		else
//		{
//			if (!stack1.empty())
//			{
//				while (!(stack1.size() == 1))
//				{
//					stack2.push(stack1.top());
//					stack1.pop();
//				}
//				int val = stack1.top();
//				stack1.pop();
//				return val;
//			}
//		}
//		return NULL;
//	}
//
//private:
//	std::stack<int> stack1;
//	std::stack<int> stack2;
//};
//
//int main(int argc, char* argv[])
//{
//	Solution deque;
//	deque.push(1);
//	deque.push(2);
//	deque.push(3);
//	deque.pop();
//	deque.push(1);
//	return 0;
//}