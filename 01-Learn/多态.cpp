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
	// 1.����ʱ��̬ ʹ���麯��ʵ�� ����
	rectangle r; r.setLength(3, 5);
	shape* s1 = &r;
	shape& s2 = r;
	int a = s1->area();
	//shape s3 = r;
	//shape s4[3];

	std::cout << sizeof(shape) << std::endl;		// ��ָ�� ռ8���ֽ�
	std::cout << sizeof(rectangle) << std::endl;	// ��ָ�� ռ8���ֽ� int 4x2

	// 2.����ʱ��̬ ���� ����

	// ���ظ��ຯ�� ��д
	return 0;
}