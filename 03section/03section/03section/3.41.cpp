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
	int arr[] = { 1,2,3,4,5 };
	vector<int> ivec(arr, end(arr));
	for (int i : ivec)
		cout << i << endl;
	system("pause");
	return 0;
}