#include <iostream>
#include <string>
#include <vector>
#include <cctype>//��������iostream��
#include <cstddef>//���������±�size_t��ָ�����ptrdiff_t����
#include <iterator>//����⺯��begin��end
#include <cstring>
#include <stdexcept>
#include <exception>
#include <initializer_list>
#include <cstdlib> // ����main������������EXIT_FAILURE��EXIT_SUCCESS

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::begin;
using std::end;
using std::runtime_error;
using std::exception;
using std::initializer_list;

int odd[] = { 1,3,5,7,9 };
int even[] = { 0,2,4,6,8 };

decltype(odd) &arrPty(int i)
{
	return (i % 2) ? odd : even;
}

int main()
{
	int(&arr)[5] = arrPty(3);
	for (auto tmp : arr)
		cout << tmp << endl;
	system("pause");
	return 0;
}