#include <iostream>
#include <string>
#include <vector>
#include <cctype>//��������iostream��
#include <cstddef>//���������±�size_t��ָ�����ptrdiff_t����
#include <iterator>//����⺯��begin��end
#include <cstring>
#include <ctime>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::begin;
using std::end;

char next_text();
unsigned some_value();
int get_value();
int get_num();
unsigned get_bufCnt();
int main()
{
	srand((unsigned int)time(NULL));
	//a. case��ǩ��default��ǩû��break;

	/*unsigned aCnt = 0, eCnt = 0, iouCnt = 0;
	char ch = next_text();
	switch (ch) {
	case 'a':aCnt++;
	case 'e':eCnt++;
	default:iouCnt++;
	}*/

	//�޸ģ�

	//unsigned aCnt = 0, eCnt = 0, iouCnt = 0;
	//char ch = next_text();
	//switch (ch) {
	//case 'a':aCnt++; break;
	//case 'e':eCnt++; break;
	//default:iouCnt++; break;
	//}

	//b. ix���岢��ʼ����case 1������

	/*vector<int> ivec = { 1,2,3,4,5 };
	unsigned index = some_value();
	switch (index) {
	case 1:
		int ix = get_value();
		ivec[ix] = index;
		break;
	default:
		ix = ivec.size() - 1;
		ivec[ix] = index;
	}*/

	//�޸ģ�

	//vector<int> ivec = { 1,2,3,4,5 };
	//unsigned index = some_value();
	//switch (index) {
	//	//int ix;
	//case 1:
	//	int ix;//û�г�ʼ��
	//	ix = get_value();
	//	ivec[ix] = index;
	//	break;
	//default:
	//	ix = ivec.size() - 1;
	//	ivec[ix] = index;
	//}

	//c. case��ǩ���������ͳ������ʽ

	/*unsigned evenCnt = 0, oddCnt = 0;
	int digit = get_num() % 10;
	switch (digit) {
	case 1,3,5,7,9:
		oddCnt++;
		break;
	case 2,4,6,8,10:
		evenCnt++;
		break;
	}*/

	// �޸ģ�

	/*unsigned evenCnt = 0, oddCnt = 0;
	int digit = get_num() % 10;
	switch (digit) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 9:
		oddCnt++;
		break;
	case 2:
	case 4:
	case 6:
	case 8:
	case 10:
		evenCnt++;
		break;
	}*/

	//d. case��ǩֻ�������ͳ���

	/*unsigned ival = 512, jval = 1024, kval = 4096;
	unsigned bufsize;
	unsigned swt = get_bufCnt();
	switch (swt)
	{
	case ival:
		bufsize = ival * sizeof(int);
		break;
	case jval:
		bufsize = ival * sizeof(int);
		break;
	case kval:
		bufsize = ival * sizeof(int);
		break;
	}*/

	// �޸�

	/*const unsigned ival = 512, jval = 1024, kval = 4096;
	unsigned bufsize;
	unsigned swt = get_bufCnt();
	switch (swt)
	{
	case ival:
		bufsize = ival * sizeof(int);
		break;
	case jval:
		bufsize = ival * sizeof(int);
		break;
	case kval:
		bufsize = ival * sizeof(int);
		break;
	}*/

	system("pause");
	return 0;
}

char next_text()
{
	return rand() % 26 + 'a';
}
unsigned some_value()
{
	return rand() % 5;
}
int get_value()
{
	return rand() % 5;
}
int get_num()
{
	return rand();
}
unsigned get_bufCnt()
{
	int nums[] = { 512.1024,4096 };
	return nums[rand() % 3];
}