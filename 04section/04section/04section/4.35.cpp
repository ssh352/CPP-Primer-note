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
	char cval; int ival; unsigned int ui;
	float fval; double dval;
	// a. 'a'ת��Ϊint��Ȼ����ӵĽ��ת��Ϊchar
	cval = 'a' + 3;
	// b. ivalת��Ϊdouble,Ȼ��unsigned intת��Ϊdouble,Ȼ���������ת��Ϊfloat
	fval = ui - ival*1.0;
	// c. uiת��Ϊdouble,fvalת��Ϊdouble
	dval = ui*fval;
	// d. ivalת��Ϊfloat��Ȼ����ӵĽ��ת��Ϊdouble��Ȼ��ת��Ϊchar
	cval = ival + fval + dval;
	system("pause");
	return 0;
}