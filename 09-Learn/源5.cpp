#include <cstdio>

int main()
{
	const int x = 1;
	int* p;
	int const** q = &p;  //��qΪһ��ָ��const int*��ָ�룬���ڽ���ָ��non-const int* p
	*q = &x;             //�����ڽ�qָ���ָ�븳Ϊ����x�ĵ�ַ��*q��Ϊָ��p�ĵ�ַ����ʱpָ��x��
	//**q=2;             //�۱���
	*p = 2;              //����Ϊp��non-const int *,���Կ��Զ��丳ֵ����ʱ������x��ֵ��Ϊ��2�����Բ����ϳ�ʶ
	printf("%d", x);
}