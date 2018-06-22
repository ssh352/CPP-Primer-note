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
	string name;
	vector<string> phones;
};

int main()
{
	string line, word;
	vector<PersonInfo> people;
	istringstream record;
	// ���д������ȡ���ݣ�ֱ��cin�����ļ�β(����������)
	while (getline(cin, line)) {
		PersonInfo info;
		record.str(line); // ����¼�󶨵��ն������
		record >> info.name;
		// ��line�е�����ȫ��������ͬ���ᴥ��"�ļ�����"�źţ���record�ϵ���һ�����������ʧ��
		while (record >> word)
			info.phones.push_back(word);
		record.clear();
		people.push_back(info);
	}

	for (auto var : people)
	{
		cout << "name: " << endl << var.name << endl;
		cout << "tel: " << endl;
		for (auto tel : var.phones)
		{
			cout << tel << " ";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}