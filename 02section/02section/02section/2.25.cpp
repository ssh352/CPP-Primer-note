#include <iostream>
int main()
{
	int* ip, i, &r = i;	//a. ip��ָ��int���͵�ָ�룬i��int������r��int���͵�����
						// ip��i��ֵΪ�����r��i
	int i, *ip = 0;		//b. i��int������ip��ָ��int���͵�ָ��
						// i��ֵΪ�����ip��ֵΪ0
	int* ip, ip2;		//c.ipΪָ��int���͵�ָ�룬ip2Ϊint����
						// ���ǵ�ֵ����ȷ��
	system("pause");
	return 0;
}