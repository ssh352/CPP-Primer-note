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
#include <cassert> // ����assert
#include "Person.h"
using std::cout;
using std::cin;
using std::endl;
using std::cerr;
using std::string;
using std::vector;
using std::begin;
using std::end;
using std::runtime_error;
using std::exception;
using std::initializer_list;
using std::istream;
using std::ostream;
typedef string::size_type sz;

// ���������͵�ַ�ĺ���Ӧ����const
// ��Ϊ��Щ���������޸Ķ����ֵ��ͬʱ����Ҫconst����������ָ���ܹ�����

int main2()
{
	Person per;
	read(cin, per);
	print(cout, per);
	system("pause");
	return 0;
}