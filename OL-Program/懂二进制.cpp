/*世界上有10种人，一种懂二进制，一种不懂。那么你知道两个int32整数m和n的二进制表达，有多少个位(bit)不同么？*/
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