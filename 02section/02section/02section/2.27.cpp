#include <iostream>
int main()
{
	int i = -1, &r = 0;		//a.�Ƿ����ǳ������ò��ܰ�����ֵ
	const int i = -1, &r = 0;	//c.�Ϸ�
	const int i2 = i, &r = i;	//g.�Ϸ�
	int *const p2 = &i2;		//b.�Ƿ���i2��һ��������ֻ����ָ������ָ��ָ����
	const int *const p3 = &i2;	//d.�Ϸ�
	const int *p1 = &i2;		//e.�Ϸ�
	const int &const r2;		//f.�Ƿ���δ��ʼ���������ʼ����Ϸ�
	system("pause");
	return 0;
}