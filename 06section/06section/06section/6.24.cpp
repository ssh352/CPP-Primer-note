#include <iostream>
#include <string>
#include <vector>
#include <cctype>//��������iostream��
#include <cstddef>//���������±�size_t��ָ�����ptrdiff_t����
#include <iterator>//����⺯��begin��end
#include <cstring>
#include <stdexcept>
#include <exception>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::begin;
using std::end;
using std::runtime_error;
using std::exception;
// �ô���ֻ����������10��Ԫ�ص�����
//void print(const int ia[10])
//{
//	for (size_t i = 0; i != 10; ++i)
//		cout << ia[i] << endl;
//}

// �޸�
void print(const int ia[])
{
	for (size_t i = 0; i != 10; ++i)
		cout << ia[i] << endl;
}
int main()
{
	int nums[10] = { 0,1,2,3,4,5,6,7,8,9 };
	print(nums);
	system("pause");
	return 0;
}