#include <iostream>
#include <string>
#include <vector>
#include <cctype>//��������iostream��
#include <cstddef>//���������±�size_t��ָ�����ptrdiff_t����
#include <iterator>//����⺯��begin��end
#include <cstring>
#include <stdexcept>
#include <exception>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::begin;
using std::end;
using std::runtime_error;
using std::exception;

double calc(double);
int count(const string &, char);
int sum(vector<int>::iterator, vector<int>::iterator, int);
vector<int> vec(10);
int main()
{
	// a. ʵ�ε���������...
	//calc(23.4, 55.1);
	//calc(23.4);

	// b. ��ȷ
	//count("abcda", 'a');

	// c.
	//calc(66);

	// d.
	//sum(vec.begin(), vec.end(), 3.8);

	system("pause");
	return 0;
}

int sum(vector<int>::iterator beg, vector<int>::iterator end, int i)
{
	return 10;
}

double calc(double d)
{
	return d;
}

int count(const string &s, char c)
{
	int cnt = 0;
	for (size_t i = 0; i != s.size(); i++)
	{
		if (s[i] == c)
			++cnt;
	}
	return cnt;
}