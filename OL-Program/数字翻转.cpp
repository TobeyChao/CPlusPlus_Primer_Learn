///*
// * ����һ������X���������rev(X)Ϊ��X����λ��ת����������ȥ����ǰ��0������:
//��� X = 123����rev(X) = 321;
//��� X = 100����rev(X) = 1.
//���ڸ�������x��y,Ҫ��rev(rev(x) + rev(y))Ϊ���٣�
// */
//#include <iostream>
//#include <vector>
//using namespace std;
//
//void GetAllNum(vector<int> & num, int numer)
//{
//	while (numer)
//	{
//		int tmp = numer % 10; //������λ
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