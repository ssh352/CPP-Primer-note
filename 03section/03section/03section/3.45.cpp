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

using int_array = int[4];
typedef int int_array[4];

int main()
{
	int ia[3][4] = {
		{ 1,2,3,4 },
		{ 5,6,7,8 },
		{ 9,8,7,6 }
	};
#pragma region ��Χfor
	for (auto &p : ia) {
		for (int q : p)
			cout << q << ' ';
		cout << endl;
	}
#pragma endregion

#pragma region �±�
	for (size_t i = 0; i != end(ia) - begin(ia); i++)
	{
		for (size_t j = 0; j < end(ia[i]) - begin(ia[i]); j++)
			cout << ia[i][j] << ' ';
		cout << endl;
	}
#pragma endregion

#pragma region ָ��
	for (auto p = ia; p != end(ia); p++)
	{
		for (auto q = *p; q != end(*p); q++)
			cout << *q << ' ';
		cout << endl;
	}
#pragma endregion


	system("pause");
	return 0;
}