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
	string maxString;
	int max = 0;
	string nowString;
	string prevString;
	int tmp = 1;
	while (cin >> nowString)
	{
		if (nowString == prevString) {
			tmp++;
			if (tmp > max) {
				max = tmp;
				maxString = prevString;
			}
		}
		else {
			prevString = nowString;
			tmp = 1;
		}
	}
	if (max > 1)
		cout << maxString << " ����������:" << max << "��" << endl;
	else
		cout << "û���������ֵĵ���" << endl;
	system("pause");
	return 0;
}