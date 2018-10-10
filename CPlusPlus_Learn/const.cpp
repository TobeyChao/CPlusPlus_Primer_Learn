//int main()
//{
//	const int ci = 42;
//	int i = ci;
//
//	//指向int的常量指针，不能改变常量指针的值，但是可以改变指针所指int的值
//	int * const p = &i;
//	*p = 0;
//	//p = 0; 错误
//
//	//指向常量int的指针，不能改变常量int的值，但是可以改变指针所指
//	const int * p2 = &i;
//	p2 = 0;
//	//*p2 = 0; 错误
//}