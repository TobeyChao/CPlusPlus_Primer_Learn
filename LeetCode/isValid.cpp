//#include <string>
//#include <stack>
//
//class Solution {
//public:
//	bool isValid(std::string s) {
//		std::stack<char> brackets;
//
//		for (auto element : s)
//		{
//			switch (element)
//			{
//			case '[':
//			case '{':
//			case '(':
//				brackets.push(element);
//				break;
//			case ']':
//				if (brackets.empty() || brackets.top() != '[')
//				{
//					return false;
//				}
//				brackets.pop();
//				break;
//			case '}':
//				if (brackets.empty() || brackets.top() != '{')
//				{
//					return false;
//				}
//				brackets.pop();
//				break;
//			case ')':
//				if (brackets.empty() || brackets.top() != '(')
//				{
//					return false;
//				}
//				brackets.pop();
//				break;
//			}
//		}
//
//		return brackets.empty();
//
//	}
//};
//
//int main(int argc, char* argv[])
//{
//	Solution s;
//	bool b = s.isValid("[");
//	return 0;
//}