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
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, spaceCnt = 0;
	char ch;
	while ((ch = getchar()) > 0) {
		// ���chʹԪ����ĸ�������Ӧ�ü���ֵ��1
		switch (ch) {
		case 'a':
		case 'A':
			++aCnt;
			break;
		case 'e':
		case 'E':
			++eCnt;
			break;
		case 'i':
		case 'I':
			++iCnt;
			break;
		case 'o':
		case 'O':
			++oCnt;
			break;
		case 'u':
		case 'U':
			++uCnt;
			break;
		default:
			{
			if (isspace(ch))
				++spaceCnt;
			}
			break;
		}
	}
	// ������
	cout << "Number of vowel a: \t" << aCnt << '\n'
		<< "Number of vowel e: \t" << eCnt << '\n'
		<< "Number of vowel i: \t" << iCnt << '\n'
		<< "Number of vowel o: \t" << oCnt << '\n'
		<< "Number of vowel u: \t" << uCnt << '\n'
		<< "Number of space: \t" << spaceCnt << endl;
	system("pause");
	return 0;
}