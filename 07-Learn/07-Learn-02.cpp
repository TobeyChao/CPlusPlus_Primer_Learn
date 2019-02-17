//c++函数返回类型什么情况带const

//情况1 函数返回值不想其立即修改的。
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
//	abc(a, b, c)++;  /////////////////////错误 因为返回值是const类型
//	c++;           /////////////////////正确
//	int d = abc(a, b, c);/////////////////////正确
//	std::cout << c << std::endl;
//	return 0;
//}

//情况2重载运算符符合逻辑
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
//	//情况1
//	//a + b = c; /////////错误
//
//	//情况2
//	if (a + b == c)  /////////错误
//	{
//
//	}
//
//	return 0;
//}

//情况3 通过函数创建指向常量的指针

//

//const 成员函数的返回类型是引用时候，需要加const 约束
#include <iostream>
class Test
{
public:
	Test(int a)
		:
	value(a) 
	{}

	//如果函数右面const 那么是不允许改变value的值的，
	//情况1 如果返回的是int&
	//那么如果以一个int&来接受返回值就改变了value值，所以返回值必须要是const才可以,此时不管value是不是const的
	//情况2 如果返回的是int
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