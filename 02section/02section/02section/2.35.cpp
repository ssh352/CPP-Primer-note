#include <iostream>
int main()
{
	//j��int
	//k�ǰ�int���������ã��൱��const int &k=i;
	//p��ָ��int������ָ��(�ײ�const)���൱��const int *p=&i;
	//j2��int�������൱��const int j2=i;
	//k2��kһ��
	const int i = 42;
	auto j = i;
	const auto &k = i;
	auto *p = &i;
	const auto j2 = i, &k2 = i;
	j = 10;
	k = 10;
	*p = 10;
	j2 = 20;
	k2 = 20;
	system("pause");
	return 0;
}