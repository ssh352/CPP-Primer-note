#include <iostream>
#include <string>
#include <vector>
#include <cctype>//��������iostream��
#include <cstddef>//���������±�size_t��ָ�����ptrdiff_t����
#include <iterator>//����⺯��begin��end
#include <cstring>
#include <stdexcept>
#include <exception>
#include <initializer_list>
#include <cstdlib> // ����main������������EXIT_FAILURE��EXIT_SUCCESS
#include <cassert> // ����assert
using std::cout;
using std::cin;
using std::endl;
using std::cerr;
using std::string;
using std::vector;
using std::begin;
using std::end;
using std::runtime_error;
using std::exception;
using std::initializer_list;
typedef string::size_type sz;
int main()
{
	// ���ѭ��������s�������cin״̬Ϊ��Чʱ����s������soughtʱ�˳�ѭ��
	// ���ʱ������ж�cin�϶���Ϊfalse�ģ�����assert�ض��ᴥ��
	// ����assert��Ȼ������ôʹ�õģ�assert�ڵ�����Ӧ���ǲ��ܴ���������
	// So ������
	string s;
	while (cin >> s&&s != sought) {}// �պ�����
	assert(cin);
	system("pause");
	return 0;
}