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

// ʹ�����÷��㰡������ȡ��ַ&��Ҳ���ý�����*
void swop(int &val1p, int &val2p)
{
	val1p += val2p;
	val2p = val1p - val2p;
	val1p -= val2p;
}
int main()
{
	int val1, val2;
	cin >> val1 >> val2;
	swop(val1, val2);
	cout << val1 << ' ' << val2 << endl;
	system("pause");
	return 0;
}