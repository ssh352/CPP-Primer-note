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
	//a. ѭ����ȡ���������
	// do while��ѭ����ֻ����һ����䣬Ӧ����{}������
	/*do {
		int v1, v2;
		cout << "Please enter two numbers to sum:";
		if (cin >> v1 >> v2)
			cout << "Sum is : " << v1 + v2 << endl;
	} while (cin);*/

	//b. do while�������ֲ��ܶ������
	//   ������ѭ��������������Ҳ���ܷ��ʣ�����Ӧ�ö�����do-while�ⲿ
	//int ival;
	//do {
	//	// ...
	//} while (ival = 1);

	//c. ����������ѭ�������������ֲ��ܷ��ʣ�����Ӧ�ö�����do-while�ⲿ
	/*int ival;
	do {
		ival = get_response();
	} while (ival);*/


	system("pause");
	return 0;
}