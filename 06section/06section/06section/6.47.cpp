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
typedef string::size_type sz;
#define NDEBUG
void func(vector<string> &svec, vector<string>::iterator &iter)
{
	if (iter != svec.end())
		func(svec, ++iter);
	else
		return;
#ifndef NDEBUG
	cout << svec.size() << endl;
#endif
	cout << *--iter << endl;
}

int main()
{
	vector<string> svec = { "haha","xixi","hehe","gaga" };
	func(svec, svec.begin());
	system("pause");
	return 0;
}