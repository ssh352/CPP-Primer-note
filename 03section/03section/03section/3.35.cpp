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

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8 };
	for (int *p = begin(arr); p < end(arr); ++p)
	{
		*p = 0;
	}
	for (int i:arr)
	{
		cout << i << "\t";
	}
	system("pause");
	return 0;
}