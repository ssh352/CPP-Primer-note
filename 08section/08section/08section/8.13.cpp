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
using std::flush;
using std::ends;
using std::unitbuf;
using std::nounitbuf;
using std::fstream;
using std::ifstream;
using std::ofstream;
using std::stringstream;
using std::istringstream;
using std::ostringstream;

typedef string::size_type sz;

struct PersonInfo {
	string name = "ha";
	vector<string> phones;
};

bool valid(const string &nums)
{
	if (nums.length() == 11)
		return true;
	return false;
}

string format(const string &nums)
{
	string result(nums);
	result.insert(3, "-").insert(7, "-");
	return result;
}

int main()
{
	string fileIn = "8.13test1.txt";
	string fileOut = "8.13test2.txt";

	ifstream ifile(fileIn);
	ofstream ofile(fileOut, fstream::app);

	if (!ifile || !ofile)
	{
		cerr << "Open file error!" << endl;
		return EXIT_FAILURE;
	}

	string line, word;
	vector<PersonInfo> people;
	// ���д������ȡ���ݣ�ֱ��cin�����ļ�β(����������)
	while (getline(ifile, line)) {
		PersonInfo info;
		istringstream record(line); // ����¼�󶨵��ն������
		record >> info.name;
		// ��line�е�����ȫ��������ͬ���ᴥ��"�ļ�����"�źţ���record�ϵ���һ�����������ʧ��
		while (record >> word)
			info.phones.push_back(word);
		people.push_back(info);
	}
	ifile.close();

	for (const auto &entry : people) { // ��people��ÿһ��
		ostringstream formatted, badNums; // ÿ��ѭ���������Ķ���
		for (const auto &nums : entry.phones) { // ��ÿ����
			if (!valid(nums)) {
				badNums << " " << nums; // �������ַ�����ʽ����badNums
			}
			else
				// ����ʽ�����ַ���"д��"formatted
				formatted << " " << format(nums);
		}
		if (badNums.str().empty()) // û�д������
			ofile << entry.name << " " << formatted.str() << endl;
		else // ���򣬴�ӡ���ֺʹ������
			cerr << "input error: " << entry.name << " invalid number(s)" << badNums.str() << endl;
	}
	ofile.close();

	system("pause");
	return 0;
}