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
#pragma region string
	/*string s1, s2;
cin >> s1 >> s2;
if (s1 == s2)
	cout << "s1=s2" << endl;
else
	cout << "s1!=s2" << endl;*/
#pragma endregion

#pragma region C����ַ���
	char cstr1[100];
	char cstr2[100];
	scanf("%s %s", cstr1, cstr2);
	if (strcmp(cstr1, cstr2) == 0)
		cout << "cstr1=cstr2" << endl;
	else
		cout << "cstr1!=cstr2" << endl;
#pragma endregion


	system("pause");
	return 0;
}