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
	signed short i = 1;
	i += 11111111111111111;
	cout << i << endl;
	i *= 11111111111111111111;
	cout << i << endl;
	i = -i * 11111111111111111111;
	cout << i << endl;
	system("pause");
	return 0;
}