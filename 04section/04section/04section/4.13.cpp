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
	int i;
	double d;
	//a.��Ϊ3
	d = i = 3.5;
	cout << i << ' ' << d << endl;
	//b. dΪ3.5��iΪ3
	i = d = 3.5;
	cout << i << ' ' << d << endl;
	system("pause");
	return 0;
}