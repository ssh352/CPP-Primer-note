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
	//ʹ��if���ĸ�����⣬������������
	int grade = 80;
	string finalgrade = (grade > 90) ? "high pass" : (grade < 60) ? "fail" : (grade < 75) ? "low pass" : "pass";
	if (grade > 90)
		finalgrade = "high pass";
	else if (grade < 60)
		finalgrade = "fail";
	else if (grade < 75)
		finalgrade = "low pass";
	else
		finalgrade = "pass";
	system("pause");
	return 0;
}