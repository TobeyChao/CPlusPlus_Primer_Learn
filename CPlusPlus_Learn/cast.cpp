//#include <iostream>
//using namespace std;
//
//class Base1
//{
//private:
//	int base1_;
//};
//
//class Base2
//{
//private:
//	int base2_;
//};
//
//
//class Driver :public Base1, public Base2
//{
//private:
//	int num_;
//};
//
//int main()
//{
//	Driver d;
//	Base1* b1 = &d;
//	Base2* b2 = &d;
//	Driver* p = &d;
//	cout << b1 << endl << b2 << endl << p << endl;
//	if (b2 == p)
//		cout << "b2 == p" << endl;
//	else
//		cout << "b2 != p" << endl;
//	return 0;
//}