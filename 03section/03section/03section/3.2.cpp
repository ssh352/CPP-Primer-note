#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	//string line;
	//// ÿ�ζ���һ���У�ֱ�������ļ�ĩβ
	//getline(cin, line);
	//if (!line.empty())
	//	cout << line;

	string word;
	// ÿ�ζ���һ�����ʣ��ո���н�β
	cin >> word;
	if (!word.empty())
		cout << word << endl;
	system("pause");
	return 0;
}