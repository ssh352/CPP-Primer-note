#include <iostream>
int null = 0;
int main()
{
	// �Ƿ���ָ�벻�ܳ�ʼ��Ϊ��������ʹ������ֵΪ0
	// int null = 0, *p = null;
	constexpr int *p = &null;
	system("pause");
	return 0;
}