#include <iostream>
#include <string>
#include <vector>
#include <cctype>//��������iostream��
#include <cstddef>//���������±�size_t��ָ�����ptrdiff_t����
#include <iterator>//����⺯��begin��end
#include <cstring>
#include <stdexcept>
#include <exception>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::begin;
using std::end;
using std::runtime_error;
using std::exception;
void print(const int *beg, int *end)
{
	while (beg != end)
		cout << *beg++ << endl;
}
void print(const int *beg, int n)
{
	for (size_t i = 0; i != n; i++)
		cout << beg[i] << endl;
}
int main()
{
	int i = 0, j[2] = { 0,1 };
	//print(&i, &i + 1);
	//print(begin(j), end(j));
	print(&i, 1);
	print(j, 2);
	system("pause");
	return 0;
}