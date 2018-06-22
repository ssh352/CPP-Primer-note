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
public:		// ����˷���˵����
	// ����Ĭ�Ϲ��캯����������ֻ����һ��stringʵ�εĹ��캯��������ͬ
	Sales_data(std::string s = "") :bookNo(s) {}
	Sales_data(const std::string &s, unsigned n, double p) :
		bookNo(s), units_sold(n), revenue(p*n) {}
	Sales_data(std::istream&);
	std::string isbn() const { return bookNo; }
	Sales_data &combine(const Sales_data&);

private:	// ����˷���˵����
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

	Sales_data myadd(const Sales_data &lhs) const
	{
		Sales_data sum = lhs; // ��lhs�����ݳ�Ա������sum
		sum.combine(*this); // ��rhs�����ݳ�Ա�ӵ�sum����
		return sum;
	}
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

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
	return lhs.myadd(rhs);
}

Sales_data::Sales_data(std::istream &is)
{
	read(is, *this); // read�����������Ǵ�is�ж�ȡһ��������ϢȻ�����this������
}

class ConstRef {
public:
	ConstRef(int ii);
private:
	int i;
	const int ci = 1;
	int &ri = i;
};
// ����ci��ri���뱻��ʼ��
//ConstRef::ConstRef(int ii)
//{ // ��ֵ��
//	i = ii;
//	ci = ii;
//	ri = i;
//}
// ��ȷ����ʾ�س�ʼ�����ú�const��Ա
ConstRef::ConstRef(int ii) :i(ii), ci(ii), ri(i) {}

class X {
	int i;
	int j;
public:
	// δ����ģ�i��j֮ǰ����ʼ��
	X(int val) :j(val), i(j) {}
};


class Debug {
public:
	constexpr Debug(bool b = true) :hw(b), io(b), other(b) {}
	constexpr Debug(bool h, bool i, bool o) : hw(h), io(i), other(o) {}
	constexpr bool any() const { return hw || io || other; }
	void set_io(bool b) { io = b; }
	void set_hw(bool b) { hw = b; }
	void set_other(bool b) { other = b; }
private:
	bool hw;		// Ӳ�����󣬶���IO����
	bool io;		// IO����
	bool other;		// ��������
};

int main()
{
	//ConstRef con(1);

	//Sales_data obj();	// ��ȷ��������һ���������Ƕ���
	//if(obj.isbn()==Primer_5th_ed.isbn())	// ����obj��һ������

	//// ������Ҫ�û����������ת����
	//// 1.��"9-999-99999-9"ת����string
	//// 2.�ٰ����(��ʱ��)stringת����Sales_data
	Sales_data item;
	string null_book("9-999-99999-9");
	//item.combine("9-999-99999-9");

	// ��ȷ����ʾ��ת����string����ʽ��ת����Sales_data
	//item.combine(string("9-999-99999-9"));
	// ��ȷ����ʽ��ת����string����ʾ��ת����Sales_data
	//item.combine(Sales_data("9-999-99999-9"));

	// ��ȷ��ʵ����һ����ʾ�����Sales_data����
	//item.combine(Sales_data(null_book));
	// ��ȷ��static_cast����ʹ��explicit�Ĺ��캯��
	//item.combine(static_cast<Sales_data>(cin));

	constexpr Debug io_sub(false, true, false);
	if (io_sub.any())
		cerr << "print appropriate error messages" << endl;
	constexpr Debug prod(false);
	if (prod.any())
		cerr << "print an error message" << endl;

	system("pause");
	return 0;
}

#pragma region 7.5.1Ĭ��ʵ�κ͹��캯��
//class Sales_data {
//public:
//	// ����Ĭ�Ϲ��캯����������ֻ����һ��stringʵ�εĹ��캯��������ͬ
//	Sales_data(std::string s = "") :bookNo(s) {}
//	// �������캯����֮ǰһ��
//	Sales_data(std::string s, unsigned cnt, double rev) :
//		bookNo(s), units_sold(cnt), revenue(rev*cnt) {}
//	Sales_data(std::istream &is) { read(is, *this); }
//	// ������Ա��֮ǰ�İ汾һ��
//};  
#pragma endregion

#pragma region 7.5.2ί�й��캯��
				//class Sales_data {
//public:
//	// ��ί�й��캯��ʹ�ö�Ӧ��ʵ�γ�ʼ����Ա
//	Sales_data(std::string s, unsigned cnt, double price) :
//		bookNo(s), units_sold(cnt), revenue(cnt*price) {}
//	// ���๹�캯��ȫ��ί�и���һ�����캯��
//	Sales_data() :Sales_data("", 0, 0) {}
//	Sales_data(std::string s) :Sales_data(s, 0, 0) {}
//	Sales_data(std::istream &is) :Sales_data()
//	{
//		read(is, *this);
//	}
//	// ������Ա��֮ǰ�İ汾һ��
//};  
#pragma endregion

#pragma region 7.5.3Ĭ�Ϲ��캯��������
				//class NoDefault {
//public:
//	NoDefault(const std::string&);
//	// ����������Ա������û���������캯����
//};
//struct A {	// Ĭ�������my_mem��public��
//	NoDefault my_mem;
//};
//A a;		// ���󣺲���ΪA�ϳɹ��캯��
//struct B {
//	B() {}	// ����b_memberû�г�ʼֵ
//	NoDefault b_member;
//};  
#pragma endregion

#pragma region 7.5.4 ��ʽ��������ת��
//class Sales_data {
//public:
//	Sales_data() = default;
//	Sales_data(const std::string &s, unsigned n, double p) :
//		bookNo(s), units_sold(n), revenue(p*n) {}
//	explicit Sales_data(const std::string &s) :bookNo(s) {}
//	explicit Sales_data(std::istream&);
//	// ������Ա��֮ǰ�İ汾һ��
//};
//
//item.combine(null_book);	// ����string���캯����explicit��
//item.combine(cin);			// ����istream���캯����explicit��

// ����explicit�ؼ���ֻ�ܳ��������ڵĹ��캯��������
//explicit Sales_data::Sales_data(std::istream &is)
//{
//	read(is, *this); // read�����������Ǵ�is�ж�ȡһ��������ϢȻ�����this������
//}

//Sales_data item1(null_book);	// ��ȷ��ֱ�ӳ�ʼ��
//// ���󣺲��ܽ�explicit���캯�����ڿ�����ʽ�ĳ�ʼ������
//Sales_data item2 = null_book;  
#pragma endregion

#pragma region 7.5.5 �ۺ���
				//struct Data {
//	int ival;
//	string s;
//};
//val1.ival = 0; val1.s = string("Anna");
//Data val1 = { 0,"Anna" };
//// ���󣺲���ʹ��"Anna"��ʼ��ival��Ҳ����ʹ��1024��ʼ��s
//Data val2 = { "Anna",1024 };  
#pragma endregion
