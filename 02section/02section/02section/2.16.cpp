#include <iostream>
int main()
{
	int i = 0, &r1 = i;
	double d = 0, &r2 = d;
	r2 = 3.14159;	//�Ϸ�����3.14159��ֵ��d;
	r2 = r1;		//�Ϸ�����i��ֵ��d
	i = r2;			//�Ϸ�����d��ֵ��i�����ܻᶪʧ����
	r1 = d;			//�Ϸ�����d��ֵ��i�����ܻᶪʧ����
	std::cout << i << "\t" << d << std::endl;
	system("pause");
	return 0;
}