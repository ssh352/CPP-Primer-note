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

void manip(int, int);
double dobj;

int main()
{
	// a. manip('a', 'z') 'a'��'z'��������������3��ת��
	manip('a', 'z');
	// b. manip(55.6, dobj) 55.6��������ת����4����dobj��ȷƥ��
	manip(55.6, dobj);
	system("pause");
	return 0;
}