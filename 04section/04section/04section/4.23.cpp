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
	//+����������ȼ�����==�������?:�����
	//�������Ƚ�s+s[s.size()-1]�ټ���?:�����
	//�޷��Ƚ�string���char���ͣ����Բ��Ϸ�
	string s = "word";
	//string p1 = s + s[s.size() - 1] == 's' ? "" : "s";
	//�޸�
	string p1 = s + (s[s.size() - 1] == 's' ? "" : "s");
	system("pause");
	return 0;
}