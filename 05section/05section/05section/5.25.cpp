#include <iostream>
#include <string>
#include <vector>
#include <cctype>//��������iostream��
#include <cstddef>//���������±�size_t��ָ�����ptrdiff_t����
#include <iterator>//����⺯��begin��end
#include <cstring>
#include <stdexcept>
#include <exception>
#include "Sales_item.h"
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::begin;
using std::end;
using std::runtime_error;
using std::exception;

int main()
{
	int num1, num2;
	while (cin >> num1 >> num2) {
		try {
			if (num2 == 0)
				throw runtime_error("�㲻��������");
			cout << num1*1.0 / num2 << endl;
		}
		catch (runtime_error err) {
			cout << err.what()
				<< "\nTry Again? Enter y or n" << endl;
			char c;
			cin >> c;
			if (!cin || c == 'n')
				break;// ����whileѭ��
		}
	}
	system("pause");
	return 0;
}