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
	/*int sum = 0, val = 1;
	while (val <= 10) {
		sum += val;
		++val;
	}
	cout << "Sum of 1 to 10 inclusive is " << sum << endl;*/

	// �ɶ��Խ�����...
	int sum = 0, val = 1;
	while (val <= 10)
		sum += val,++val;
	cout << "Sum of 1 to 10 inclusive is " << sum << endl;
	system("pause");
	return 0;
}