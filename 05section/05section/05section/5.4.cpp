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
	// a. �����Ⱑ��iterû�г�ʼ����ʹ����

	//string s;
	//while (string::iterator iter!=s.end())
	//{
	//	/*...*/
	//}

	// �޸�

	//string s;
	//string::iterator iter = s.begin();
	//while (iter++ != s.end())
	//{
	//	/*...*/
	//}

	// b. �����Ⱑ��status����while()���涨��ģ�����while�Ͳ���ʹ���˰�

	//while(bool status=fine(word)){/*...*/ }
	//if(!status){/*...*/}

	// �޸�
	bool status;
	while (status = fine(word)) {/*...*/ }
	if (!status) {/*...*/ }

	system("pause");
	return 0;
}