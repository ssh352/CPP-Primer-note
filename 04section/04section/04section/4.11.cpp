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
	int a = 1, b = 2, c = 3, d = 4;
	/*cout << ((a > b) ? ((b > c) ? ((c > d) ? 1 : 0) : 0) : 0) << endl;*/
	if (a > b&&b > c&&c > d)
	{
		;
	}
	system("pause");
	return 0;
}