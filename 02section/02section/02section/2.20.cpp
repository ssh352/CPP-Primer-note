#include <iostream>
int main()
{
	// ��δ��뽫i��ֵ��Ϊi��ƽ��
	int i = 42;
	int* p1 = &i;
	*p1 = *p1 * *p1;
	std::cout << i << std::endl;
	system("pause");
	return 0;
}