//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	//����
//	int ival = 1024;
//	int ival2 = 10240;
//	int &refVal = ival;
//	int &refVal2 = ival2;
//	std::cout << refVal << std::endl;
//	refVal = 2;
//	refVal = ival2;
//	int ii = refVal;
//	std::cout << ii << refVal << std::endl;
//
//	//ָ��
//	int ival = 42;
//	int ival2 = 43;
//	int *p = &ival;
//	std::cout << *p << std::endl
//		<< &ival << std::endl
//		<< &p << " " << sizeof(p) << std::endl;
//	//ָ��ָ�������
//	int *&r = p;
//	r = &ival2;
//	system("pause");
//	return 0;
//}