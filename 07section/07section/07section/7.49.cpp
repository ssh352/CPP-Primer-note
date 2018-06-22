#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <cstddef>
#include <iterator>
#include <cstring>
#include <stdexcept>
#include <exception>
#include <initializer_list>
#include <cstdlib>
#include <cassert>
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

class Sales_data
{
	// ΪSales_data�ķǳ�Ա������������Ԫ����
	friend Sales_data add(const Sales_data&, const Sales_data&);
	friend istream &read(istream&, Sales_data&);
	friend ostream &print(ostream&, const Sales_data&);
public:		// �����˷���˵����
			// ����Ĭ�Ϲ��캯����������ֻ����һ��stringʵ�εĹ��캯��������ͬ
	Sales_data(std::string s = "") :bookNo(s) {}
	Sales_data(const std::string &s, unsigned n, double p) :
		bookNo(s), units_sold(n), revenue(p*n) {}
	Sales_data(std::istream&);
	std::string isbn() const { return bookNo; }
	Sales_data &combine(const Sales_data&);

private:	// �����˷���˵����
	double avg_price() const { return units_sold ? revenue / units_sold : 0; }
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;

	istream &myread(istream &is)
	{
		double price = 0;
		is >> bookNo >> units_sold >> price;
		revenue = price*units_sold;
		return is;
	}

	ostream &myprint(ostream &os) const
	{
		os << isbn() << " " << units_sold << " " << revenue << " " << avg_price();
		return os;
	}

	//Sales_data myadd(const Sales_data &lhs) const
	//{
	//	Sales_data sum = lhs; // ��lhs�����ݳ�Ա������sum
	//	sum.combine(*this); // ��rhs�����ݳ�Ա�ӵ�sum����
	//	return sum;
	//}
};

// Sales_data�ӿڵķǳ�Ա��ɲ��ֵ�����
Sales_data add(const Sales_data&, const Sales_data&);
istream &read(istream&, Sales_data&);
ostream &print(ostream&, const Sales_data&);

Sales_data& Sales_data::combine(const Sales_data &rhs)
{
	units_sold += rhs.units_sold; // ��rhs�ĳ�Ա�ӵ�this����ĳ�Ա��
	revenue += rhs.revenue;
	return *this; // ���ص��øú����Ķ���
}

istream &read(istream &is, Sales_data &item)
{
	return item.myread(is);
}

ostream &print(ostream &os, const Sales_data &item)
{
	return item.myprint(os);
}

//Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
//{
//	return lhs.myadd(rhs);
//}

Sales_data::Sales_data(std::istream &is)
{
	read(is, *this); // read�����������Ǵ�is�ж�ȡһ��������ϢȻ�����this������
}

int main()
{

	system("pause");
	return 0;
}

// ����i.combine(s)������i��һ��Sales_data����s��һ��string���� 

// ���ù��캯��ʹ��s����һ����ʱSales_data����
// ����ʱSales_data��������combine�����У�ʹ��ֵ����
// combine������Ϻ�������ʱSales_data����
Sales_data &combine(Sales_data);

// ����ᱨ������Ϊ��ʱ�Ķ�����Ϊ�����ô��뷽�������ܻ�ı���ʱ������ֵ
// ��ʱ������combine������Ϻ�ͻ����٣����Ըı�����ֵû�ã����Բ�����������
Sales_data &combine(Sales_data&);

// ���ù��캯��ʹ��s����һ����ʱSales_data����
// ����ʱSales_data��������combine�����У�ʹ�ó������ô���
// combine������Ϻ�������ʱSales_data����
Sales_data &combine(const Sales_data&) const;