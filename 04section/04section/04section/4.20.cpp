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
	vector<string> svec;
	vector<string>::iterator iter = svec.begin();
	//a.�Ϸ���ȡiter��ֵ����iter��һ
	*iter++;
	//b.���Ϸ�����Ҫ��iterָ��ĳ�Աȡ��Ȼ��+1��string�����޷���1
	(*iter)++;
	//c.���Ϸ���*����������ȼ�����.�������������ͼ���ʵ�������empty()��Ա��������û�иó�Ա
	*iter.empty();
	//d.�Ϸ����൱��(*iter).empty()
	iter->empty();
	//e.���Ϸ�����Ҫ��*iterȡ���Ķ���string����
	++*iter;
	//f.�Ϸ�������(*iter).empty()��Ȼ��iter����
	iter++->empty();
	system("pause");
	return 0;
}