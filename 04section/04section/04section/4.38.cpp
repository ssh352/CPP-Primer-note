#include <iostream>
#include <string>
#include <vector>
#include <cctype>//��������iostream��
#include <cstddef>//���������±�size_t��ָ�����ptrdiff_t����
#include <iterator>//����⺯��begin��end
#include <cstring>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::begin;
using std::end;

int main()
{
	//��j/iȡ������ת��Ϊdouble����
	int j = 10, i = 3;
	double slope = static_cast<double>(j / i);
	cout << slope << endl;
	system("pause");
	return 0;
}