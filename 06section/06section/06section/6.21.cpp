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
int compare(const int, const int *);
int main()
{
	int num1, num2;
	cin >> num1 >> num2;
	
	cout << compare(num1, &num2) << endl;

	system("pause");
	return 0;
}
int compare(const int i, const int *p) {
	return i > *p ? i : *p;
}