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

//ǰ�õ����������Ȣ������һ��Ԫ�أ�����ȥȡʸ�����һ��Ԫ�صĺ�һ�������ڵ�Ԫ��
int main()
{
	auto pbeg = v.begin();
	// ���Ԫ��ֱ��������һ����ֵΪֹ
	while (pbeg != v.end() && *pbeg >= 0)
		cout << *++pbeg << endl;//���
	system("pause");
	return 0;
}