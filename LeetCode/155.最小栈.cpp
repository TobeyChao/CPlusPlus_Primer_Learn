//#include <stack>
//
//using namespace std;
//
//class MinStack {
//public:
//    MinStack() {
//
//    }
//
//    void push(int val) {
//        data.push(val);
//        if (minStack.empty())
//        {
//            minStack.push(val);
//        }
//        else
//        {
//            if (minStack.top() >= val)
//            {
//                minStack.push(val);
//            }
//        }
//    }
//
//    void pop() {
//        int val = data.top();
//        data.pop();
//        if (!minStack.empty() && minStack.top() == val)
//        {
//            minStack.pop();
//        }
//    }
//
//    int top() {
//        return data.top();
//    }
//
//    int getMin() {
//        return minStack.top();
//    }
//private:
//    stack<int> data;
//
//    stack<int> minStack;
//};
//
///**
// * Your MinStack object will be instantiated and called as such:
// * MinStack* obj = new MinStack();
// * obj->push(val);
// * obj->pop();
// * int param_3 = obj->top();
// * int param_4 = obj->getMin();
// */