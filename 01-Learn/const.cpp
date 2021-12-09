//#include <cstdio>
//
//int main()
//{
//	const int x = 1;
//	int* p1;
//	// 不合法
//	//int const **q = &p1;	//①q为一个指向const int*的指针，现在将其指向non-const int* p
//	//*q = &x;				//②*q的类型是int const * 现在将q指向的指针赋为常量x的地址（*q即为指针p的地址，这时p指向x）
//	////**q=2;				//③报错 **q 的类型是 int const
//	//*p1 = 2;				//④因为p是non-const int *,所以可以对其赋值，这时将常量x的值改为了2，明显不符合常识
//
//	// 合法
//	const int *const *q = &p1;					// *q的类型是int const * const
//	int *p = const_cast<int*>(&x);
//	*p = 3;
//	return 0;
//}