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
	//a:-86
	cout << -30 * 3 + 21 / 5 << endl;
	//b:-18
	cout << -30 + 3 * 21 / 5 << endl;
	//c:0
	cout << 30 / 3 * 21 % 5 << endl;
	//d:-2
	cout << -30 / 3 * 21 % 4 << endl;
	system("pause");
	return 0;
}