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

class Account {
public:
	void calculate() { amount += amount*interestRate; }
	static double rate() { return interestRate; }
	static void rate(double);
private:
	std::string owner;
	double amount;
	static double interestRate;
	static double initRate()
	{
		return 1.1;
	}
};

// ���岢��ʼ��һ����̬��Ա
double Account::interestRate = initRate();

//double Account::initRate()
//{
//	return 1.1;
//}

void Account::rate(double newRate)
{
	interestRate = newRate;
}

class Account2
{
public:
	static double rate() { return interestRate; }
	static void rate(double);
public:
	static double interestRate;
	static constexpr int period = 30;	// period�ǳ������ʽ
	double daily_tbl[period];
};

// һ��������ʼֵ�ľ�̬��Ա����
constexpr int Account2::period;			// ��ʼֵ����Ķ������ṩ��

void test(const int &i)
{
	cout << i << endl;
}

class Person
{
public:
	Person() = default;
	Person(string name, int age) :name(name), age(age) {}

private:
	string name;
	int age;
};

class Bar
{
public:
	// ...
private:
	static Bar mem1;	// ��ȷ����̬��Ա�����ǲ���ȫ����
	Bar *mem2;			// ��ȷ��ָ���Ա�����ǲ���ȫ����
	// Bar mem3;		// �������ݳ�Ա��������ȫ����
};

class Screen
{
public:
	// bkground��ʾһ���������Ժ���ľ�̬��Ա
	Screen& clear(char = bkground);
private:
	static const char bkground;
};

int main()
{
	//double r;
	//r = Account::rate();	// ʹ����������������ʾ�̬��Ա

	//Account ac1;
	//Account *ac2 = &ac1;
	//// ���þ�̬��Ա����rate�ĵȼ���ʽ
	//r = ac1.rate();			// ͨ��Account�Ķ��������
	//r = ac2->rate();		// ͨ��ָ��Account�����ָ��

	//Account2 a3;
	////a3.rate(3);
	//test(a3.period);

	Person p;

	system("pause");
	return 0;
}