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

void f();
void f(int);
void f(int, int);
void f(double, double = 3.14);

int main()
{
	// a. f(2.56, 42)
	// ���к��� f(int, int); f(doube, double = 3.14);
	// �����ƥ�䣬������
	// f(2.56, 42);

	// b. f(42)
	// ���к��� f(int); f(double, double=3.14);
	// ���ƥ��f(int);
	f(42);

	// c. f(42, 0);
	// ���к��� f(int, int); f(double, double=3.14);
	// ���ƥ�� f(int, int)
	f(42, 0);

	// d. f(2.56, 3.14)
	// ���к��� f(int, int); f(double, double=3.14);
	// ���ƥ�� f(double, double=3.14);
	f(2.56, 3.14);

	system("pause");
	return 0;
}

void f() {
	cout << "The function is f()" << endl;
}
void f(int val1) {
	cout << "The function is f(int)" << endl;
}
void f(int val1, int val2) {
	cout << "The function is f(int, int)" << endl;
}
void f(double val1, double val2) {
	cout << "The function is f(double, double = 3.14)" << endl;
}