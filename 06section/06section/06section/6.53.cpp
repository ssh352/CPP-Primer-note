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

// a. �ڶ�������������ƥ������ת���ĳ���ʵ�ν����õڶ�������
int calc(int&, int&);
int calc(const int&, const int&);

// b. �ڶ�������������ƥ������ת���ĳ���ʵ�ν����õڶ�������
//int calc(char*, char*);
//int calc(const char*, const char*);

// c. �ڶ�������û���ã���Ϊ����const�ᱻ���ԣ����Թ����ظ�����
int calc(char *, char *);
int calc(char* const, char* const);

int main()
{

	system("pause");
	return 0;
}

int calc(char *, char *) {
	return -1;
}