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
#include <fstream>
#include <sstream>
#include <fstream>
#include <sstream>
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
using std::ofstream;
using std::flush;
using std::ends;
using std::unitbuf;
using std::nounitbuf;
using std::fstream;
using std::ifstream;
using std::ofstream;
using std::istringstream;
using std::ostringstream;
using std::stringstream;

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

int main(int argc, char *argv[])
{
	/*std::ofstream fstrm("test.txt");

	if (fstrm.is_open())
		fstrm << "haha" << endl;
	fstrm.close();*/

	//ifstream input(argv[1]);	// �����ۼ�¼�ļ�
	//ofstream output(argv[2]);	// ������ļ�
	//Sales_data total;			// ���������ܶ�ı���
	//if (read(input, total)) {
	//	Sales_data trans;
	//	while (read(input, trans)) {
	//		if (total.isbn() == trans.isbn())
	//			total.combine(trans);
	//		else {
	//			print(output, total) << endl;	// ��ӡ���
	//			total = trans;					// ������һ����
	//		}
	//	}
	//	print(output, total) << endl;	// ��ӡ���һ��������۶�
	//}
	//else								// �ļ�������������
	//	cerr << "No data?!" << endl;

	//string ifile;

	//ifstream in(ifile);	// ����һ��ifstream���򿪸����ļ�
	//ofstream out;		// ����ļ���δ���κ��ļ������
	//out.open(ifile + ".copy");	// ��ָ���ļ�

	//in.close();	// �ر��ļ�
	//in.open(ifile + "2");	// ����һ���ļ�

	// ��ÿ�����ݸ�������ļ�ִ��ѭ������
	//for (auto p = argv + 1; p != argv + argc; ++p)
	//{
	//	ifstream input(*p);	// ��������������ļ�
	//	if (input) {		// ����ļ��򿪳ɹ���"����"���ļ�
	//		process(input);
	//	}
	//	else
	//		cerr << "couldn't open: " << string(*p);
	//}	// ÿ��ѭ����input�����뿪��������˻ᱻ����


	// ���⼸������У�file1�����ض�
	//ofstream out("file1");	// ���������ģʽ���ļ����ض��ļ�
	//ofstream out2("file1", ofstream::out);	// �����ؽض��ļ�
	//ofstream out3("file1", ofstream::out | ofstream::trunc);
	//// Ϊ�˱����ļ����ݣ����Ǳ�����ʾָ��appģʽ
	//ofstream app("file2", ofstream::app);	// ����Ϊ���ģʽ
	//ofstream app2("file2", ofstream::out | ofstream::app);

	//out << "haha" << endl;
	//out2 << "xixi" << endl;
	//out3 << "hehe" << endl;


	//ofstream out;	// δָ���ļ���ģʽ
	////out.open("scratchpad");	// ģʽ��������Ϊ����ͽض�
	////out.close();	// �ر�out���Ա����ǽ������������ļ�
	//out.open("file1", ofstream::ate);	// ģʽΪ�����׷��
	//out.close();



	system("pause");
	return 0;
}