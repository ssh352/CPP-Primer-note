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
	//a. *vec.begin()�ȼ���*(vec.begin())
	vector<int> vec{ 6 };
	cout << *vec.begin() << endl;

	//b. *vec.begin()+1 �ȼ��� (*(vec.begin()))+1
	cout << ((*(vec.begin())) + 1) << endl;
	system("pause");
	return 0;
}