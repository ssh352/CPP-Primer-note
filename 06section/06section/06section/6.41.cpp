#include <iostream>
#include <string>
#include <vector>
#include <cctype>//��������iostream��
#include <cstddef>//���������±�size_t��ָ�����ptrdiff_t����
#include <iterator>//����⺯��begin��end
#include <cstring>
#include <stdexcept>
#include <exception>
#include <initializer_list>
#include <cstdlib> // ����main������������EXIT_FAILURE��EXIT_SUCCESS
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::begin;
using std::end;
using std::runtime_error;
using std::exception;
using std::initializer_list;
typedef string::size_type sz;
// a�Ƿ���init�ĵ�һ���ββ�û��Ĭ��ʵ��
// c�ĵ�������Բ�������Ϊ14��ʼ�����ǵ�һ���βΣ�'*'��ʼ�����ǵڶ����β�
char *init(int ht, int wd = 80, char bckgrnd = ' ');
int main()
{
	//init();
	init(24, 10);
	init(41, '*');
	system("pause");
	return 0;
}
char *init(int ht, int wd, char bckgrnd)
{
	cout << ht << endl
		<< wd << endl
		<< bckgrnd << endl;
	char ch = 'a';
	return &ch;
}