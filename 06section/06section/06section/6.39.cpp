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

// a.�ڶ������β�����Ϊ����const���ͣ������������������в�ͬ�Ķ�����䣬���ֻ��ʵ��һ��
int calc(int, int);
int calc(const int, const int);

// b.�ڶ���Ϊ�Ƿ��������������ز���ֻ�з���ֵ��ͬ
//int get();
//double get();

// c.�ڶ�����������reset���������������뷵��ֵ���Ͷ���ͬ
int *reset(int *);
double *reset(double *);

int main()
{
	int i = 10, j = 20;
	cout << calc(i, j) << endl;
	system("pause");
	return 0;
}
//int calc(int val1, int val2) {
//	return val1 + val2;
//}
int calc(int val1, int val2) {
	return val1 * val2;
}
