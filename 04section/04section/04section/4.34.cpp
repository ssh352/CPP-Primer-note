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
	bool flag; char cval;
	short sval; unsigned short usval;
	int ival; unsigned int uival;
	long lval; unsigned long ulval;
	float fval; double dval;

	//a. fvalת��Ϊbool
	if(fval){}
	//b. ivalת��Ϊfloat��Ȼ���fval����ӽ��ת��Ϊdouble
	dval = fval + ival;
	//c. cvalת��Ϊint��Ȼ����˵Ľ��ת��Ϊdouble
	dval + ival*cval;
	system("pause");
	return 0;
}