// const std::string &����

#include<iostream>
#include<initializer_list>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::initializer_list;

void func(initializer_list<string> list)
{
	for (const auto &elem : list)
		cout << elem << " ";
}

int main()
{
	func({ "����", "����", "�ǺǴ�" });
	system("pause");
	return 0;
}