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
	cout << ((12 / 3) * 4) + (5 * 15) + ((24 % 4) / 2) << endl;
	cout << 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2 << endl;
	system("pause");
	return 0;
}