//#include <stack>
//
//using namespace std;
//
//class MyQueue {
//public:
//    stack<int> stackL;
//    stack<int> queueOrder;
//
//    MyQueue() {
//
//    }
//
//    void push(int x) {
//        stackL.push(x);
//    }
//
//    int pop() {
//        if (queueOrder.empty())
//        {
//            while (!stackL.empty())
//            {
//                int val = stackL.top();
//                queueOrder.push(val);
//                stackL.pop();
//            }
//        }
//
//        int val = queueOrder.top();
//        queueOrder.pop();
//        return val;
//    }
//
//    int peek() {
//        if (queueOrder.empty())
//        {
//            while (!stackL.empty())
//            {
//                int val = stackL.top();
//                queueOrder.push(val);
//                stackL.pop();
//            }
//        }
//        return queueOrder.top();
//    }
//
//    bool empty() {
//        return queueOrder.empty() && stackL.empty();
//    }
//};
//
///**
// * Your MyQueue object will be instantiated and called as such:
// * MyQueue* obj = new MyQueue();
// * obj->push(x);
// * int param_2 = obj->pop();
// * int param_3 = obj->peek();
// * bool param_4 = obj->empty();
// */
//
//int main()
//{
//    MyQueue myQueue;
//    myQueue.push(1); // queue is: [1]
//    myQueue.push(2); // queue is: [1, 2] (leftmost is front of the queue)
//    myQueue.peek(); // return 1
//    myQueue.pop(); // return 1, queue is [2]
//    myQueue.empty(); // return false
//}