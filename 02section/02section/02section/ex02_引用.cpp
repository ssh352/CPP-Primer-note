#include <iostream>
int main()
{
	int ival = 1024;
	int &refVal = ival;	// refValָ��ival(��ival����һ������)
						//int &refVal2;	// �������ñ��뱻��ʼ��
	refVal = 2;	// ��2����refVal��ָ��Ķ��󣬴˴����Ǹ�����ival
	int ii = refVal;	// ��ii=ivalִ�н��һ��
						// ��ȷ��refVal3�󶨵����Ǹ���refVal�󶨵Ķ����ϣ�������ǰ󶨵�ival��
	int &refVal3 = refVal;
	// ������refVal�󶨵Ķ����ֵ��ʼ������i
	//int i = refVal;	// ��ȷ��i����ʼ��Ϊival��ֵ

	int i = 1024, i2 = 2048;	// i��i2����int
	int &r = i, r2 = i2;		// r��һ�����ã���i����һ��r2��int
	int i3 = 1024, &ri = i3;	// i3��int,ri��һ�����ã���i3����һ��
	int &r3 = i3, &r4 = i2;		// r3��r4��������

								//int &refVal3 = 10;	// �����������͵ĳ�ʼֵ������һ������
	double dval = 3.14;
	int refVal5 = dval;	// ���󣺴˴��������͵ĳ�ʼֵ������int�Ͷ���
	system("pause");
	return 0;
}