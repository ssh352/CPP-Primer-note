#include <iostream>
int main()
{
	//const int buf;	//a.���Ϸ���const��������ʼ��
	int cnt = 0;		//b.�Ϸ�
	const int sz = cnt;	//c.�Ϸ�
	//++cnt; ++sz;		//d.���Ϸ���const�����ܸı�
	system("pause");
	return 0;
}