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
	const string *ps;
	char *pc;
	void *pv;
	//a.
	pv = (void*)ps;
	pv = const_cast<string*>(ps);
	//b.
	i = int(*pc);
	i = static_cast<int>(*pc);
	//c.
	pv = &d;
	pv = static_cast<void*>(&d);
	//d.
	pc = (char*)pv;
	pc = static_cast<char*>(pv);

	system("pause");
	return 0;
}