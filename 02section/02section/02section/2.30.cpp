#include <iostream>
int main()
{
	int i;
	//����const
	const int v2 = 0;
	int v1 = v2;
	int *p1 = &v1, &r1 = v1;
	//�ײ�const			  �ײ�Ͷ���const �ײ�const
	const int *p2 = &v2, *const p3 = &i, &r2 = v2;
	system("pause");
	return 0;
}