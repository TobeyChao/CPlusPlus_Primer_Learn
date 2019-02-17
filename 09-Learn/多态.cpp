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

int main()
{
	rectangle r; r.setLength(3, 5);
	shape *s1 = &r;
	shape &s2 = r;
	int a = s2.area();
	//shape s3 = r;
	//shape s4[3];
	return 0;
}