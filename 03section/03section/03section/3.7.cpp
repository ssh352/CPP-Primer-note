#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	//s��ֵ����ı�
	string s;
	cin >> s;
	for (auto i : s)
		i = 'X';
	cout << s;
	system("pause");
	return 0;
}