#include <iostream>
int j = 0;
constexpr int i = 42;
int main()
{
	//const int max_files = 20;	// ��
	//const int limit = max_files + 1;// ��
	//int staff_size = 27;	// ����
	//const int sz = get_size();	// ����

	const int *p = nullptr;	//p��һ��ָ������ָ��
	constexpr int *q = nullptr;//q��һ��ָ�������ĳ���ָ��

	constexpr int *np = nullptr;//np��һ��ָ�������ĳ���ָ�룬��ֵΪ��
	constexpr const int *p = &i;//p�ǳ���ָ�룬ָ�����ͳ���i
	constexpr int *p1 = &j;//p1�ǳ���ָ�룬ָ������j
	system("pause");
	return 0;
}