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

// val�Ƿ������βΣ��������ں����ڣ�val--���ݵ���val�Լ�֮ǰ��ֵ
// �����ֵ����ı䣬��˻�һֱ�ݹ�

// ����val�Ľ׳ˣ���1 * 2 * 3... * val
int factorial(int val)
{
	if (val > 1)
		return val*factorial(val--);
	return 1;
}
int main()
{
	factorial(5);
	system("pause");
	return 0;
}