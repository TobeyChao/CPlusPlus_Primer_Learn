///*
// * 对于一个整数X，定义操作rev(X)为将X按数位翻转过来，并且去除掉前导0。例如:
//如果 X = 123，则rev(X) = 321;
//如果 X = 100，则rev(X) = 1.
//现在给出整数x和y,要求rev(rev(x) + rev(y))为多少？
// */
//#include <iostream>
//#include <vector>
//using namespace std;
//
//void GetAllNum(vector<int> & num, int numer)
//{
//	while (numer)
//	{
//		int tmp = numer % 10; //获得最低位
//		numer /= 10;
//		num.push_back(tmp);
//	}
//}
//
//int GetOneRevNum(const vector<int> & num)
//{
//	int sum = 0;
//	int k = pow(10, num.size() - 1);
//	for (auto i : num)
//	{
//		sum += k * i;
//		k /= 10;
//	}
//	return sum;
//}
//
//int rev(int x)
//{
//	vector<int> nums;
//	GetAllNum(nums, x);
//	return GetOneRevNum(nums);
//}
//
//int main()
//{
//	int x1, x2;
//	cin >> x1 >> x2;
//	//cout << rev(x1) << endl;
//	//cout << rev(x2) << endl;
//	cout << rev(rev(x1) + rev(x2));
//
//	system("pause");
//	return 0;
//}