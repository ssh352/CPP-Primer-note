#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <iterator>
#include <cstddef>
#include <cstring>

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::vector;
using std::begin;
using std::end;

int main()
{
	//int ia[3][4];// ��СΪ3�����飬ÿ��Ԫ���Ǻ���4������������
	// ��СΪ10�����飬����ÿ��Ԫ�ض��Ǵ�СΪ20������
	// ��Щ�����Ԫ���Ǻ���30������������
	//int arr[10][20][30] = { 0 };//������Ԫ�س�ʼ��Ϊ0

	/*int ia[3][4] = { {0},{4},{8} };
	int ix[3][4] = { 0,3,6,9 };*/

	// ��arr����Ԫ��Ϊia���һ�е����һ��Ԫ�ظ�ֵ
	//ia[2][3] = arr[0][0][0];
	//int(&row)[4] = ia[1];// ��row�󶨵�ia�ĵڶ���4Ԫ��������

	//constexpr size_t rowCnt = 3, colCnt = 4;
	//int ia[rowCnt][colCnt];//12��δ��ʼ����Ԫ��
	//// ����ÿһ��
	//for (size_t i = 0; i != rowCnt; i++)
	//{
	//	// �������ڵ�ÿһ��
	//	for (size_t j = 0; j != colCnt; j++)
	//	{
	//		// ��Ԫ�ص�λ��������Ϊ����ֵ
	//		ia[i][j] = i*colCnt + j;
	//	}
	//}

	//constexpr size_t rowCnt = 3, colCnt = 4;
	//int ia[rowCnt][colCnt];//12��δ��ʼ����Ԫ��
	//size_t cnt = 0;
	//for(auto &row:ia)
	//	for (auto &col : row) {
	//		col = cnt;
	//		++cnt;
	//	}

	//for (size_t i = 0; i < rowCnt; i++)
	//{
	//	cout << ia[i][0] << endl;
	//}

	/*for (const auto &row : ia)
		for (auto col : row)
			cout << col << endl;*/

	int ia[3][4];//��СΪ3�����飬ÿ��Ԫ���Ǻ���4������������
	//int(*p)[4] = ia;//pָ����4������������
	//p = &ia[2];//pָ��ia��βԪ��

	// ���ia��ÿ��Ԫ�ص�ֵ��ÿ���ڲ������ռһ��
	// pָ����4������������
	//for (auto p = ia; p != ia + 3; p++) {
	//	// qָ��4�������������Ԫ�أ�Ҳ����˵��qָ��һ������
	//	for (auto q = *p; q != *p + 4; q++)
	//		cout << *q << ' ';
	//	cout << endl;
	//}

	// pָ��ia�ĵ�һ������
	//for (auto p = begin(ia); p != end(ia); p++) {
	//	// qָ���ڲ��������Ԫ��
	//	for (auto q = begin(*p); q != end(*p) ; q++)
	//		cout << *q << ' ';// ���q��ָ������ֵ
	//	cout << endl;
	//}

	//using int_array = int[4];
	//typedef int int_array[4];

	//for (int_array *p = ia; p != ia + 3; ++p)
	//{
	//	for (int *q = *p; q != *p + 4; ++q)
	//		cout << *q << ' ';
	//	cout << endl;
	//}

	system("pause");
	return 0;
}