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

	//�Ϸ���r1���ǵײ�const���Կ��Ըı�󶨶����ֵ
	r1 = v2;
	//�Ƿ���p2ʱ�ײ�const��p1��ָ������ָ�룬���ܸ�ֵ��p1
	//p1 = p2;
	//�Ϸ���p1��ָ������ָ�룬���Ը�ֵ���ײ�constָ��
	p2 = p1;
	//�Ƿ���p3ӵ�еײ�const�����ܸ�ֵ��ָ������ָ��
	//p1 = p3;
	//�Ϸ���p2��p3�����еײ�const��p3�Ķ���const����Ӱ�츳ֵ������
	p2 = p3;
	system("pause");
	return 0;
}