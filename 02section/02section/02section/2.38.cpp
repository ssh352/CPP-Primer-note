#include <iostream>
int main()
{
	//decltypeָ�������ǻ�ȡ�ı��ʽ������
	//auto�ǻ�ȡ�ı���(����ʽ)��ֵ������
	//һ��
	int num1 = 10;
	decltype(num1) num2 = 20;
	auto num3 = 20;
	//��һ��
	int *p1 = &num1;
	decltype(*p1) p2= num1;//p2��int&
	auto p3 = *p1;//p3��int

	const int cn1 = 20;
	decltype(cn1) cn2 = 30;//cn2��const int
	auto cn3 = 40;//cn3��int

	int &nn1 = num1;
	decltype(nn1) nn2 = num1;//nn2��int&
	auto nn3 = nn1;//nn3��int


	system("pause");
	return 0;
}