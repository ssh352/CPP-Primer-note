#include <iostream>
#include <string>
#include <vector>
#include <cctype>//��������iostream��
#include <cstddef>//���������±�size_t��ָ�����ptrdiff_t����
#include <iterator>//����⺯��begin��end
#include <cstring>
#include <stdexcept>
#include <exception>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::begin;
using std::end;
using std::runtime_error;
using std::exception;
// ��������ء�������̫�򵥣��о�ֱ�ӵ���s.empty()������
// Ȼ����Ϊ�ββ��ǳ������ã����Բ��ܸ����������ַ�������ֵ��const������Ҫת�������ʹ�����

// ����
bool is_empty(const string &s) { return s.empty(); }
int main()
{
	system("pause");
	return 0;
}