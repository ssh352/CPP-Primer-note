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

// ���ؾֲ������ͷ����������βε�������Ч
// �����ؽ����Ϊ��ֵ��ʱ�򣬷��س�����������Ч
int &func(int &val)
{
	return val;
}
const int &func2(const int &val)
{
	return val;
}
int main()
{
	int val = 20;
	cout << func(val) << endl;
	func(val) = 30;
	cout << val << endl;

	cout << func2(30) << endl;
	//func2(30) = 40;

	system("pause");
	return 0;
}