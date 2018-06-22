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

int my_add(int val1, int val2);
int my_sub(int val1, int val2);
int my_mul(int val1, int val2);
int my_div(int val1, int val2);

int main()
{
	vector<int(*)(int, int)> fvec;
	fvec.push_back(my_add);
	fvec.push_back(my_sub);
	fvec.push_back(my_mul);
	fvec.push_back(my_div);

	int num1, num2;
	cin >> num1 >> num2;
	for (auto tmp : fvec)
	{
		cout << tmp(num1, num2) << endl;
	}

	system("pause");
	return 0;
}

int my_add(int val1, int val2)
{
	return val1 + val2;
}
int my_sub(int val1, int val2)
{
	return val1 - val2;
}
int my_mul(int val1, int val2)
{
	return val1 * val2;
}
int my_div(int val1, int val2)
{
	return val1 / val2;
}