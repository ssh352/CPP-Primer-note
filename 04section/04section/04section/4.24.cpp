//finalgrade = (grade > 90) ? "high pass" : (grade < 60) ? "fail" : "pass";
//��������������ɣ������(grade > 90) ? "high pass" : (grade < 60)�Ľ����Ϊ�ұ�?:�����һ����
//�ȼ���finalgrade = ((grade > 90) ? "high pass" : (grade < 60)) ? "fail" : "pass";
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
	int grade = 80;
	string finalgrade = ((grade > 90) ? "high pass" : (grade < 60)) ? "fail" : "pass";
	system("pause");
	return 0;
}