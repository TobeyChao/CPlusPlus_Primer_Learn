//#include <cstdio>
//
//int main()
//{
//	const int x = 1;
//	int* p1;
//	// ���Ϸ�
//	//int const **q = &p1;	//��qΪһ��ָ��const int*��ָ�룬���ڽ���ָ��non-const int* p
//	//*q = &x;				//��*q��������int const * ���ڽ�qָ���ָ�븳Ϊ����x�ĵ�ַ��*q��Ϊָ��p�ĵ�ַ����ʱpָ��x��
//	////**q=2;				//�۱��� **q �������� int const
//	//*p1 = 2;				//����Ϊp��non-const int *,���Կ��Զ��丳ֵ����ʱ������x��ֵ��Ϊ��2�����Բ����ϳ�ʶ
//
//	// �Ϸ�
//	const int *const *q = &p1;					// *q��������int const * const
//	int *p = const_cast<int*>(&x);
//	*p = 3;
//	return 0;
//}