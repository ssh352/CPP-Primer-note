#include <iostream>
#include <string>
#include <vector>
#include <cctype>//��������iostream��
#include <cstddef>//���������±�size_t����
#include <iterator>//����begin��end����
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::begin;
using std::end;

int main()
{
	//unsigned cnt = 42;// ���ǳ������ʽ
	//constexpr unsigned sz = 42;// �������ʽ
	//int arr[10];//����10������������
	//int *parr[sz];//����42������ָ�������
	//string bad[cnt];//����cnt���ǳ������ʽ
	//string strs[get_size()];//��get_size()��constexprʱ��ȷ���������

	//const unsigned sz = 3;
	//int ial[sz] = { 0,1,2 };//����3��Ԫ�ص����飬Ԫ��ֵ�ֱ���0��1��2
	//int a2[] = { 0,1,2 };	//ά����3������
	//int a3[5] = { 0,1,2 };	//�ȼ���a3[]={0,1,2,0,0}
	//string a4[3] = { "hi","bye" };//�ȼ���a4[]={"hi","bye",""}
	//int a5[2] = { 0,1,2 };	//���󣺳�ʼֵ����

	//char a1[] = { 'C','+','+' };//�б��ʼ����û�п��ַ�
	//char a2[] = { 'c','+','+','\0' };//�б��ʼ����������ʽ�Ŀ��ַ�
	//char a3[] = "c++";//�Զ���ӱ�ʾ�ַ��������Ŀ��ַ�
	//const char a4[6] = "Daniel";//����û�пռ�ɴ�ſ��ַ�

	//int *ptrs[10];	//ptrs�Ǻ���10������ָ�������
	//int &refs[10] =/*?*/;//���󣺲��������õ�����
	//int(*Parray[10]) = &arr;//Parrayָ��һ������10������������
	//int(&arrRef)[10] = arr;//arrRef����һ������10������������

	/*unsigned scores[11] = {};
	unsigned grade;
	while (cin >> grade) {
		if (grade <= 100)
			++scores[grade / 10];
	}*/

	//int ia[] = { 0,1,2,3,4,5,6,7,8,9 };
	//auto ia2(ia);//ia2��һ������ָ�룬ָ��ia�ĵ�һ��Ԫ��
	//ia2 = 42;//����ia2��һ��ָ�룬������intֵ��ָ�븳ֵ

	//// ia3��һ������10������������
	//decltype(ia) ia3 = { 0,1,2,3,4,5,6,7,8,9 };
	//ia3 = p;	//���󣺲�������ָ������鸳ֵ
	//ia[4] = i;	//��ȷ����i��ֵ����ia3��һ��Ԫ��

	//int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	//int *e = &arr[10];	//ָ��arrβԪ�ص���һλ�õ�ָ��

	//int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	//int *e = &arr[10];// ָ��arrβԪ�ص���һλ�õ�ָ��
	//for (int *b = arr; b != e; ++b)
	//	cout << *b << endl;	// ���arr��Ԫ��

	//int ia[] = { 0,1,2,3,4,5,6,7,8,9 };// ia��һ������10������������
	//int *beg = begin(ia);// ָ��ia��Ԫ�ص�ָ��
	//int *last = end(ia);// ָ��iaβԪ�ص���һλ�õ�ָ��

	/*int *pbeg = begin(arr), *pend = end(arr);
	while (pbeg != pend&&*pbeg >= 0)
		++pbeg;*/

	/*int i = 0, sz = 42;
	int *p = &i, *e = &sz;
	cout << p - e;*/

	//constexpr size_t sz = 5;
	//int arr[sz] = { 1,2,3,4,5 };
	//int *ip = arr;
	//int *ip2 = ip + 4;

	//int *p = arr + sz;
	//int *p2 = arr + 10;

	//auto n = end(arr) - begin(arr);	//n��ֵΪarr��Ԫ�ص�����
	//int *b = arr, *e = arr + sz;
	//while (b < e) {
	//	//ʹ��*b
	//	++b;
	//}

	//int i = 0, sz = 42;
	//int *p = &i, *e = &sz;
	////δ����ģ�p��e�޹أ���˱ȽϺ������壡
	//while(p<e)

	//int ia[] = { 0,2,4,6,8 };
	//int i = ia[2];//iaת����ָ��������Ԫ�ص�ָ��
	//			  //ia[2]�õ�(ia+2)��ָ��Ԫ��
	//int *p = ia;//pָ��ia����Ԫ��
	//i = *(p + 2);//�ȼ���i=ia[2]

	//p = &ia[2];
	//int j = p[1];//����a[3]
	//int k = p[-2];//����a[0]

	//char ca[] = { 'C','+','+' };
	//cout << strlen(ca) << endl;//���ش���caû���Կ��ַ�����

	//string s("Hello World");
	////char *str = s;//����
	//const char *str = s.c_str();//��ȷ
	//cout << str << endl;
	//s = "xixi";
	//cout << str << endl;

	int int_arr[] = { 0,1,2,3,4,5 };
	// ivec��6��Ԫ�أ��ֱ���int_arr�ж�ӦԪ�صĸ���
	vector<int> ivec(begin(int_arr), end(int_arr));
	// ��������Ԫ�أ�int_arr[1]��int_arr[2]��int_arr[3]
	vector<int> subVec(int_arr + 1, int_arr + 4);
	system("pause");
	return 0;
}