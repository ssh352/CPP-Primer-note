#include <iostream>
int main()
{
	int i = 0;
	//double* dp = &i;	// a.�������Ͳ�ƥ��
	//int* ip = i;	// b.���󣬲��ܰ�int������ֵ��ָ�룬��ʹֵΪ0
	int *p = &i;	// c.��ȷ��pָ��i
	system("pause");
	return 0;
}