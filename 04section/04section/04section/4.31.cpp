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
	// ��Ϊǰ�����������Ҫ�洢�����ĸ�����ִ��Ч�ʸ�
	// �������ú���������İ汾
	vector<int> ivec = { 1,2,3,4,5 };
	vector<int>::size_type cnt = ivec.size();
	// ���Ѵ�size��1��ֵ����ivec��Ԫ��
	for (vector<int>::size_type ix = 0; ix != ivec.size();)
		ivec[ix++] = cnt--;
	for (size_t i = 0; i < ivec.size(); i++)
	{
		cout << ivec[i] << endl;
	}

	system("pause");
	return 0;
}