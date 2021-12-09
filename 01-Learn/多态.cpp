class shape
{
public:
	virtual int area() = 0;
};
class rectangle :public shape
{
public:
	int a, b;
	void setLength(int x, int y) { a = x; b = y; }
	int area() override { return a * b; }
};

#include <iostream>

int main()
{
	// 1.运行时多态 使用虚函数实现 覆盖
	rectangle r; r.setLength(3, 5);
	shape* s1 = &r;
	shape& s2 = r;
	int a = s1->area();
	//shape s3 = r;
	//shape s4[3];

	std::cout << sizeof(shape) << std::endl;		// 虚指针 占8个字节
	std::cout << sizeof(rectangle) << std::endl;	// 虚指针 占8个字节 int 4x2

	// 2.编译时多态 函数 重载

	// 隐藏父类函数 重写
	return 0;
}