#include <iostream>
int main()
{
	int i = 100, sum = 0;
	for (int i = 0; i != 10; ++i)	// �ڲ�ֲ���������forѭ���и�������һ��i��ֵ
		sum += i;
	std::cout << i << " " << sum << std::endl;
	system("pause");
	return 0;
}