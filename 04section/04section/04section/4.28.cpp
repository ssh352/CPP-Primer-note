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
	cout << "bool" << sizeof(bool) << endl
		<< "char" << sizeof(char) << endl
		<< "short" << sizeof(short) << endl
		<< "int" << sizeof(int) << endl
		<< "long" << sizeof(long) << endl
		<< "long long" << sizeof(long long) << endl
		<< "float" << sizeof(float) << endl
		<< "double" << sizeof(double) << endl
		<< "long double" << sizeof(long double) << endl;
		system("pause");
	return 0;
}