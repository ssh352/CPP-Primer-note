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

#pragma region my Sales_data
//struct Sales_data {
//	std::string bookNo;
//	unsigned int units_sole = 0;
//	double revenue = 0.0;
//
//	string isbn()
//	{
//		return bookNo;
//	}
//
//	void combine(Sales_data sd)
//	{
//		revenue += sd.revenue;
//		units_sole += sd.units_sole;
//	}
//};
//
//istream &read(istream &istr, Sales_data &sd) {
//	istr >> sd.bookNo >> sd.units_sole >> sd.revenue;
//	sd.revenue *= sd.units_sole;
//	return istr;
//}
//
//ostream &print(ostream &ostr, Sales_data sd)
//{
//	ostr << sd.bookNo << " " << sd.units_sole << " " << sd.revenue << " " << sd.revenue / sd.units_sole;
//	return ostr;
//}
#pragma endregion

struct Sales_data {
	// �����Ĺ��캯��
	Sales_data() = default;
	Sales_data(const std::string &s) :bookNo(s) {}
	Sales_data(const std::string &s, unsigned n, double p) :
		bookNo(s), units_sold(n), revenue(p*n) {}
	Sales_data(std::istream &);
	// �³�Ա������Sales_data����Ĳ���
	std::string isbn() const { return bookNo; };
	Sales_data& combine(const Sales_data&);
	double avg_price() const;
	// ���ݳ�Ա��2.6.1��(64ҳ)���û�иı�
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};
// Sales_data�ķǳ�Ա�ӿں���
Sales_data add(const Sales_data&, const Sales_data&);
std::ostream &print(std::ostream&, const Sales_data&);
std::istream &read(std::istream&, Sales_data&);

double Sales_data::avg_price() const {
	if (units_sold)
		return revenue / units_sold;
	else
		return 0;
}

Sales_data& Sales_data::combine(const Sales_data &rhs)
{
	units_sold += rhs.units_sold; // ��rhs�ĳ�Ա�ӵ�this����ĳ�Ա��
	revenue += rhs.revenue;
	return *this; // ���ص��øú����Ķ���
}

istream &read(istream &is, Sales_data &item)
{
	double price = 0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = price*item.units_sold;
	return is;
}

ostream &print(ostream &os, const Sales_data &item)
{
	os << item.isbn() << " " << item.units_sold << " " << item.revenue << " " << item.avg_price();
	return os;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
	Sales_data sum = lhs; // ��lhs�����ݳ�Ա������sum
	sum.combine(rhs); // ��rhs�����ݳ�Ա�ӵ�sum����
	return sum;
}

Sales_data::Sales_data(std::istream &is)
{
	read(is, *this); // read�����������Ǵ�is�ж�ȡһ��������ϢȻ�����this������
}

int main()
{
#pragma region 7.1.1
	//Sales_data total; // ���浱ǰ��͵Ľ���ı���
//if (read(cin, total)) { // �����һ�ʽ���
//	Sales_data trans; // ������һ���������ݵı���
//	while (read(cin, trans)) { // ����ʣ��Ľ���
//		if (total.isbn() == trans.isbn()) // ���isbn
//			total.combine(trans); // ���±���total��ǰ��ֵ
//		else {
//			print(cout, total) << endl; // ������
//			total = trans; // ������һ����
//		}
//	}
//	print(cout, total) << endl; // ������һ������
//}
//else { // û�������κ���Ϣ
//	cerr << "No data?!" << endl; // ֪ͨ�û�
//}  
#pragma endregion



	system("pause");
	return 0;
}