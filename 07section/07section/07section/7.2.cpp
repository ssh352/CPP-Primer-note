#include <iostream>
#include <string>
#include <vector>
#include <cctype>//��������iostream��
#include <cstddef>//���������±�size_t��ָ�����ptrdiff_t����
#include <iterator>//����⺯��begin��end
#include <cstring>
#include <stdexcept>
#include <exception>
#include <initializer_list>
#include <cstdlib> // ����main������������EXIT_FAILURE��EXIT_SUCCESS
#include <cassert> // ����assert
using std::cout;
using std::cin;
using std::endl;
using std::cerr;
using std::string;
using std::vector;
using std::begin;
using std::end;
using std::runtime_error;
using std::exception;
using std::initializer_list;
using std::istream;
using std::ostream;
typedef string::size_type sz;

struct Sales_data {
	std::string bookNo;
	unsigned int units_sole = 0;
	double revenue = 0.0;

	string isbn() const;

	Sales_data & Sales_data::combine(const Sales_data &sd);
};

string Sales_data::isbn() const {
	return bookNo;
}
Sales_data & Sales_data::combine(const Sales_data &sd)
{
	revenue += sd.revenue;
	units_sole += sd.units_sole;
	return *this;
}

istream &read(istream &istr, Sales_data &sd) {
	istr >> sd.bookNo >> sd.units_sole >> sd.revenue;
	sd.revenue *= sd.units_sole;
	return istr;
}

ostream &print(ostream &ostr, Sales_data sd)
{
	ostr << sd.bookNo << " " << sd.units_sole << " " << sd.revenue << " " << sd.revenue / sd.units_sole;
	return ostr;
}

int main()
{
	Sales_data total; // ���浱ǰ��͵Ľ���ı���
	if (read(cin, total)) { // �����һ�ʽ���
		Sales_data trans; // ������һ���������ݵı���
		while (read(cin, trans)) { // ����ʣ��Ľ���
			if (total.isbn() == trans.isbn()) // ���isbn
				total.combine(trans); // ���±���total��ǰ��ֵ
			else {
				print(cout, total) << endl; // ������
				total = trans; // ������һ����
			}
		}
		print(cout, total) << endl; // ������һ������
	}
	else { // û�������κ���Ϣ
		cerr << "No data?!" << endl; // ֪ͨ�û�
	}

	system("pause");
	return 0;
}