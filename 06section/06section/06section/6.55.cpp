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

int add(int val1, int val2);
int sub(int val1, int val2);
int mul(int val1, int val2);
int div(int val1, int val2);

int main()
{
	vector<int(*)(int, int)> fvec;
	fvec.push_back(add);
	fvec.push_back(sub);
	fvec.push_back(mul);
	fvec.push_back(div);
	system("pause");
	return 0;
}

int add(int val1, int val2)
{
	return val1 + val2;
}
int sub(int val1, int val2)
{
	return val1 - val2;
}
int mul(int val1, int val2)
{
	return val1 * val2;
}
int div(int val1, int val2)
{
	return val1 / val2;
}