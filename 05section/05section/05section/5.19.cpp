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
	string s1;
	string s2;
	do {
		cout << "Please enter two string: " << endl;
		if(cin >> s1 >> s2)
			cout << (s1.size() < s2.size() ? s1 : s2) << endl;
	} while (cin);
	system("pause");
	return 0;
}