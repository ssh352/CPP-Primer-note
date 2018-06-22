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

int main()
{
	string file("8.10test.txt");
	vector<string> lines;

	ifstream ifile(file);
	if (!ifile)
	{
		cerr << "cannot open this file: " << file << endl;
		return EXIT_FAILURE;
	}
	string line;

	while (getline(ifile, line))
	{
		lines.push_back(line);
	}

	ifile.close();

	string word;
	istringstream iss;
	for (string var : lines)
	{
		iss.str(var);
		while (iss >> word)
			cout << word << " ";
		iss.clear();
		cout << endl;
	}

	system("pause");
	return 0;
}