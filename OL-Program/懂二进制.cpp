/*��������10���ˣ�һ�ֶ������ƣ�һ�ֲ�������ô��֪������int32����m��n�Ķ����Ʊ��ж��ٸ�λ(bit)��ͬô��*/
#include <iostream>
#include <cmath>
using namespace std;

int count_of_binary_1(int x)
{
	int count = 0;
	while (x)
	{
		x = x & x - 1;
		count++;
	}
	return count;
}

int main()
{
	int x1, x2;
	cin >> x1 >> x2;
	int x3 = x1 ^ x2;
	cout << (int)fabs(count_of_binary_1(x3)) << endl;
	system("pause");
	return 0;
}