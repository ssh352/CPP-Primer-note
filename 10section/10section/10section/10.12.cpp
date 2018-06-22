#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
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

bool compareIsbn(const Sales_data &s1, const Sales_data &s2)
{
	return s1.isbn() < s2.isbn();
}

int main(void)
{
	std::vector<Sales_data> vec;
	vec.emplace_back("127", 2, 50);
	vec.emplace_back("128", 3, 70);
	vec.emplace_back("125", 5, 60);

	std::for_each(vec.begin(), vec.end(), [](Sales_data sd) {print(cout, sd); cout << endl; });
	std::sort(vec.begin(), vec.end(), compareIsbn);
	std::for_each(vec.begin(), vec.end(), [](Sales_data sd) {print(cout, sd); cout << endl; });

	system("pause");
	return 0;
}