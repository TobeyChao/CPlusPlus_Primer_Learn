/*
	由于返回值直接指向了一个生命期尚未结束的变量，
	因此，对于函数返回值（或者称为函数结果）本身的任何操作，
	都在实际上，是对那个变量的操作，这就是引入const类型的返回的意义。
	当使用了const关键字后，即意味着函数的返回值不能立即得到修改！
	如下代码，将无法编译通过，这就是因为返回值立即进行了++操作（相当于对变量z进行了++操作），
	而这对于该函数而言，是不允许的。如果去掉const，再行编译，
	则可以获得通过，并且打印形成z = 7的结果。
*/
//#include <iostream>
//#include <cstdlib>
//const int& abc(int a, int b, int c, int& result)
//{
//	result = a + b + c;
//	return result;
//}
//int main()
//{
//	int a = 1; int b = 2; int c = 3;
//	int z;
//	std::cout << abc(a, b, c, z)++;  //wrong: returning a const reference
//	std::cout << "z= " << z << std::endl;
//	return 0;
//}

//#include <iostream>
//
//int main()
//{
//	//引用的情况
//	int i = 0;
//	int const& j = i;
//	int & const t = i;
//	const int& m = i;
//	//m = 2; 无法编译通过 常量，无法赋予其他值
//	//j = 2; 无法编译通过 常量，无法赋予其他值
//	i = 3;
//	t = 5;
//	printf("j = %d m = %d  t = %d i = %d &j = %d &m = %d &t = %d", j, m, t, i, &j, &m, &t);
//	getchar();
//
//	//指针的情况
//	int w = 0;
//	int another = 3;
//	int const * x = &w;
//	const int * y = &w;
//	int * const z = &w;
//
//	//*x = 2; 无法编译通过 常量，无法赋予其他值
//	//*y = 2; 无法编译通过 常量，无法赋予其他值
//	*z = 2;
//	//z = &another; 无法编译通过 常指针，无法指向其他地址
//}
//
//#include <iostream>
//using namespace std;
//int j = 3;
//int val()
//{
//
//	int i = 1;
//	return i;
//}
//int & ref()
//{
//	int k = 3;
//	int &i = k;
//	return i;
//}
//
//int main()
//{
//
//	int   vv = val();
//	int  rv = val();
//	int   vr = ref();
//	int & rr = ref();
//	rr = 2;
//	return 0;
//}