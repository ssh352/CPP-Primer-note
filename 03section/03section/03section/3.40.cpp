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
	char str1[] = "haha";
	char str2[] = "xixi";
	char str3[1024];
	strcpy(str3, str1);
	strcat(str3, str2);
	cout << str3 << endl;
	system("pause");
	return 0;
}