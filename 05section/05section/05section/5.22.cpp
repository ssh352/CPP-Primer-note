#include <iostream>
#include <string>
#include <vector>
#include <cctype>//��������iostream��
#include <cstddef>//���������±�size_t��ָ�����ptrdiff_t����
#include <iterator>//����⺯��begin��end
#include <cstring>
#include <ctime>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::begin;
using std::end;

int get_size();
int main()
{
	srand((unsigned int)time(NULL));
	//begin:
	//	int sz = get_size();
	//	if (sz <= 0) {
	//		goto begin;
	//	}
	int sz;
	while ((sz = get_size()) < 0)
		cout << sz << '\t';
	cout << sz << endl;
	system("pause");
	return 0;
}
int get_size()
{
	return rand() % 5 == 0 ? 1 : -1;;
}