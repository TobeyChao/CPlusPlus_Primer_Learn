//c++������������ʲô�����const

//���1 ��������ֵ�����������޸ĵġ�
//#include <iostream>
//const int & abc(int a, int b, int &re)
//{
//	re = a + b;
//	return re;
//}
//
//int main()
//{
//	int a = 1, b = 2, c;
//	abc(a, b, c)++;  /////////////////////���� ��Ϊ����ֵ��const����
//	c++;           /////////////////////��ȷ
//	int d = abc(a, b, c);/////////////////////��ȷ
//	std::cout << c << std::endl;
//	return 0;
//}

//���2��������������߼�
//class A
//{
//public:
//	int a;
//	A(int b) :a(b) {}
//	friend const A operator+(const A& lft, const A& rgt)
//	{
//		return A(lft.a + rgt.a);
//	}
//	bool operator==(const A& rhs) const
//	{
//		return a == rhs.a;
//	}
//};
//
//int main()
//{
//	A a(1), b(3), c(7);
//
//	//���1
//	//a + b = c; /////////����
//
//	//���2
//	if (a + b == c)  /////////����
//	{
//
//	}
//
//	return 0;
//}

//���3 ͨ����������ָ������ָ��

//

//const ��Ա�����ķ�������������ʱ����Ҫ��const Լ��
#include <iostream>
class Test
{
public:
	Test(int a)
		:
	value(a) 
	{}

	//�����������const ��ô�ǲ�����ı�value��ֵ�ģ�
	//���1 ������ص���int&
	//��ô�����һ��int&�����ܷ���ֵ�͸ı���valueֵ�����Է���ֵ����Ҫ��const�ſ���,��ʱ����value�ǲ���const��
	//���2 ������ص���int
	int GetValue() const 
	{
		return value;
	}
private:
	const int value;
};

int main()
{
	Test t(3);
	int &a = t.GetValue();
	std::cout << a << std::endl;
	return 0;
}