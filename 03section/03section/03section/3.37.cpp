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

//������Ҫ���ca�е������ַ�������caû���ַ�����β�������Ի��ӡ��δָ�������
int main()
{
	const char ca[] = {'h','e','l','l','o'};
	const char *cp = ca;
	while (*cp) {
		cout << *cp << endl;
		++cp;
	}
	system("pause");
	return 0;
}