#include <iostream>
#include <string>
#include <vector>
#include <cctype>//��������iostream��
#include <cstddef>//���������±�size_t��ָ�����ptrdiff_t����
#include <iterator>//����⺯��begin��end
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::begin;
using std::end;

//�����κ�����¶��Ϸ�
int main()
{
	int arr[] = { 1,2,3,4,5 };
	int *p1 = arr;
	int *p2 = arr + 2;
	p1 += p2 - p1;
	cout << *p1 << endl;
	system("pause");
	return 0;
}