#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <cctype>
#include <cstring>
#include <cstddef>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::begin;
using std::end;

int main()
{
	// Ϊÿ��Ԫ����ĸ��ʼ�������ֵ
	unsigned ffCnt = 0, flCnt = 0, fiCnt = 0;
	char perCh = 0;
	char ch;
	while (cin >> ch) {
		if (perCh == 'f')
			switch (ch) {
			case 'f':
				++ffCnt;
				break;
			case 'l':
				++flCnt;
				break;
			case 'i':
				++fiCnt;
				break;
			default:
				break;
			}
		perCh = ch;
	}
	// ������
	cout << "Number of vowel ff: \t" << ffCnt << '\n'
		<< "Number of vowel fl: \t" << flCnt << '\n'
		<< "Number of vowel fi: \t" << fiCnt << endl;
	system("pause");
	return 0;
}