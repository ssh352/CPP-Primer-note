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
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::begin;
using std::end;
using std::runtime_error;
using std::exception;
using std::initializer_list;

// VS17:#1�ᱨ��#2����
// QT5.9:#1�ᱨ��#2����
// unbutu G++:#1�ᱨ��#2���ᾯ��...
bool str_subrange(const string &str1, const string &str2)
{
	// ��С��ͬ����ʱ����ͨ��������жϽ����Ϊ����ֵ
	if (str1.size() == str2.size())
		return str1 == str2; // ��ȷ��==��������ز���ֵ
	auto size = (str1.size() < str2.size()) ? str1.size() : str2.size();
	// �������string����Ķ�Ӧ�ַ��Ƿ���ȣ��Խ϶̵��ַ�������Ϊ��
	for (decltype(size) i = 0; i != size; ++i)
	{
		if (str1[i] != str2[i])
			return 1; // ���� #1��û�з���ֵ����������������һ����
	}
	// ���� #2��������������δ�����κ�ֵ�ͽ����˺�����ִ��
	// ���������ܼ�鲻����һ����
}
int main()
{
	system("pause");
	return 0;
}