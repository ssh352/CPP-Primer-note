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
int main(int argc, char *argv[])
{
	cout << "argc: " << argc << endl;
	for (size_t i=1;i!=argc;++i)
		cout << "argv[" << i << "]: " << argv[i] << endl;

	system("pause");
	return 0;
}