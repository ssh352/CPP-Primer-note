#include <iostream>
#include <string>
#include <vector>
#include <cctype>//��������iostream��
#include <cstddef>//���������±�size_t��ָ�����ptrdiff_t����
#include <iterator>//����⺯��begin��end
#include <cstring>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::begin;
using std::end;

int main()
{
	// ʹ��ָ����±��������
	constexpr int size = 5;
	int ia[size] = { 1,2,3,4,5 };
	for (int *ptr = ia, ix=0; ix!=size&&ptr!=ia+size; ++ix,++ptr)
	{
		/* ...*/
	}
	system("pause");
	return 0;
}