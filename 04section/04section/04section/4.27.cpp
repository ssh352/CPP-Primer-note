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
	unsigned long ul1 = 3, ul2 = 7;
	// a. 3
	cout << (ul1&ul2) << endl;
	// b. 7
	cout << (ul1|ul2) << endl;
	// c. 1
	cout << (ul1&&ul2) << endl;
	// d. 1
	cout << (ul1||ul2) << endl;
	system("pause");
	return 0;
}