#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	//string��������������������ʼ�Ŀհ��ַ�
	//�ӵ�һ�ǿհ��ַ���ʼ��ȡ
	//����֮��ĵ�һ���հ��ַ�������ȡ���հ��ַ�����������������

	//getline�������ȡ���еĿհ��ַ���ֱ����������Ϊֹ
	//��ȡ���в�����

	string str;
	getline(cin, str);
	cout << str;
	system("pause");
	return 0;
}