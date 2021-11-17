//
//#include <queue>
//
//using namespace std;
//
//class MyStack {
//public:
//    queue<int> queueL;
//    queue<int> queueR;
//
//    MyStack() {
//
//    }
//
//    void push(int x) {
//        queueR.push(x);
//        while (!queueL.empty())
//        {
//            queueR.push(queueL.front());
//            queueL.pop();
//        }
//        std::swap(queueR, queueL);
//    }
//
//    int pop() {
//        int val = queueL.front();
//        queueL.pop();
//        return val;
//    }
//
//    int top() {
//        return queueL.front();
//    }
//
//    bool empty() {
//        return queueL.empty();
//    }
//};
//
///**
// * Your MyStack object will be instantiated and called as such:
// * MyStack* obj = new MyStack();
// * obj->push(x);
// * int param_2 = obj->pop();
// * int param_3 = obj->top();
// * bool param_4 = obj->empty();
// */
//
//int main()
//{
//    MyStack* myStack = new MyStack();
//    myStack->push(1);
//    myStack->push(2);
//    myStack->top(); // ·µ»Ø 2
//    myStack->pop(); // ·µ»Ø 2
//    myStack->empty(); // ·µ»Ø False
//}