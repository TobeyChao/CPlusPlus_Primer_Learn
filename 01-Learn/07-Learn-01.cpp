/*
	���ڷ���ֱֵ��ָ����һ����������δ�����ı�����
	��ˣ����ں�������ֵ�����߳�Ϊ���������������κβ�����
	����ʵ���ϣ��Ƕ��Ǹ������Ĳ��������������const���͵ķ��ص����塣
	��ʹ����const�ؼ��ֺ󣬼���ζ�ź����ķ���ֵ���������õ��޸ģ�
	���´��룬���޷�����ͨ�����������Ϊ����ֵ����������++�������൱�ڶԱ���z������++��������
	������ڸú������ԣ��ǲ�����ġ����ȥ��const�����б��룬
	����Ի��ͨ�������Ҵ�ӡ�γ�z = 7�Ľ����
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
//	//���õ����
//	int i = 0;
//	int const& j = i;
//	int & const t = i;
//	const int& m = i;
//	//m = 2; �޷�����ͨ�� �������޷���������ֵ
//	//j = 2; �޷�����ͨ�� �������޷���������ֵ
//	i = 3;
//	t = 5;
//	printf("j = %d m = %d  t = %d i = %d &j = %d &m = %d &t = %d", j, m, t, i, &j, &m, &t);
//	getchar();
//
//	//ָ������
//	int w = 0;
//	int another = 3;
//	int const * x = &w;
//	const int * y = &w;
//	int * const z = &w;
//
//	//*x = 2; �޷�����ͨ�� �������޷���������ֵ
//	//*y = 2; �޷�����ͨ�� �������޷���������ֵ
//	*z = 2;
//	//z = &another; �޷�����ͨ�� ��ָ�룬�޷�ָ��������ַ
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