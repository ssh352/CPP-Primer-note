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
	// ���ж�cp�Ƿ��ǿ�ָ�룬��cp���ǿ�ָ���ʱ��
	// �ж�*cp�Ƿ�Ϊ0��Ҳ����cp��ָ���ַ����ĵ�һ���ַ��Ƿ��ǽ�����

	const char *cp = "Hello World";
	if (cp&&*cp)
	{
		;
	}
	system("pause");
	return 0;
}