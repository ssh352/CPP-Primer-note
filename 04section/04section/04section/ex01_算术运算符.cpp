#include <iostream>
#include <string>
#include <vector>
#include <cctype>//��������iostream��
#include <cstddef>//���������±�size_t��ָ�����ptrdiff_t����
#include <iterator>//����⺯��begin��end
#include <cstring>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::begin;
using std::end;

int main()
{
	//int i = 1024;
	//int k = -i;		// k��-1024
	//bool b = true;
	//bool b2 = -b;	// b2��true

	//cout << k << " " << b2 << endl;

	//short short_value = 32767; // ���short����ռ16λ�����ܱ�ʾ�����ֵʱ32767
	//short_value += 1;	// �ü��㵼�����
	//cout << "short_value��" << short_value << endl;

	//int ival1 = 21 / 6;// ival1��3�����������ɾ�ڣ���������������
	//int ival2 = 21 / 7;// ival2��3��û�����������������ֵ
	//cout << ival1 << " " << ival2 << endl;

	//int ival = 42;
	//double dval = 3.14;
	//ival % 12;// ��ȷ�������6
	//ival%dval;// ������������Ǹ�������

	/*int m = 10;
	int n = -3;
	cout << m / n << endl;
	cout << m%n << endl;*/

	//21 % 6;// �����3
	//21 % 7;// �����0
	//-21 % -8;// �����-5
	//21 % -5;// �����1
	//21 / 6;// �����3
	//21 / 7;// �����3
	//-21 / -8;//�����2
	//21 / -5;//�����-4

	//cout << 21 % 6 << ' ' << 21 % 7 << ' ' << -21 % -8 << ' '
	//	<< 21 % -5 << ' ' << 21 / 6 << ' ' << 21 / 7 << ' '
	//	<< -21 / -8 << ' ' << 21 / -5 << endl;

	//vector<string> text = { "haha","xixi.","hehe","","wakakaka" };
	//// s�ǶԳ��������ã�Ԫ�ؼ�û�б�����Ҳ���ᱻ�ı�
	//for (const auto &s : text) {// ����test��ÿ��Ԫ��
	//	cout << s;// �����ǰԪ��
	//	// �������ַ��������Ծ�Ž������ַ������л���
	//	if (s.empty() || s[s.size() - 1] == '.')
	//		cout << endl;
	//	else
	//		cout << " ";
	//}

	/*if (!vec.empty())
		cout << vec[0];*/

	//if (i < j < k)// ��k����1���Ϊ��
	//if ( i < j && j < k )// ��iС��j����jС��kʱ����Ϊ��

	/*vector<int> ivec(10);
	for (int i : ivec)
		cout << i << endl;*/

	//k = { 3.14 };// ����խ��ת��
	//vector<int> vi;// ��ʼΪ��
	//vi = { 0,1,2,3,4,5,6,7,8,9 };// vi���ں���10��Ԫ���ˣ�ֵ��0��9

	//int ival, jval;
	//ival = jval = 0;//��ȷ��������ֵΪ0

	//int ival, *pval;
	//ival = pval = 0;// ���󣺲��ܰ�ָ���ֵ����int
	//string s1, s2;
	//s1 = s2 = "OK";

	//int i;
	//// ���õ�д�����������ֱ��ø�������
	//while ((i = get_value()) != 42) {
	//	// ��������......
	//}

	//auto pbeg = v.begin();
	//// ���Ԫ��ֱ��������һ����ֵΪֹ
	//while (pbeg != v.end() && *pbeg >= 0)
	//	cout << *pbeg++ << endl;//���

	//while (beg != s.end() && !isspace(*beg))
	//	*beg = toupper(*beg++);// ���󣺸ø�ֵ���δ����

	/*typedef struct {
		int age;
		int sorce;
	} stu;
	const stu s1 = { 20,20 };
	stu s2 = { 30,30 };
	(&s1)->age;*/

	//string s1 = "a string", *p = &s1;
	//auto n = s1.size();//����string����s1��size��Ա
	//n = (*p).size();//����p��ָ�����size��Ա
	//n = p->size();//�ȼ���(*p).size()

	/*finalgrade = (grade > 90) ? "high pass" : (grade < 60) ? "fail" : "pass";*/

	//cout << ((grade < 60) ? "fail" : "pass");//���pass����fail
	//cout << (gread < 60) ? "fail" : "pass";//���1����0
	//cout << grad < 60 ? "fail" : "pass";//������ͼ�Ƚ�cout��60

	//cout << 42 + 10;// ��ȷ��+�����ȼ����ߣ���������͵Ľ��
	//cout << (10 < 42);// ��ȷ������ʹ������������ǵ����������һ�����1
	//cout << 10 < 42;// ������ͼ�Ƚ�cout��42��

	/*vector<int> ivec{ 1,2,3,4,5,6,7,8,9 };
	string s1 = "1234567890";
	cout << sizeof(s1) << endl;
	int n;
	int ns[n];*/

	//Sales_data data, *p;
	//sizeof(Sales_data);//�洢Sales_data���͵Ķ�����ռ�ռ��С
	//sizeof data;//data�����ʹ�С����sizeof(Sales_data)
	//sizeof p;//ָ����ռ�Ŀռ��С
	//sizeof *p;//p��ָ���͵Ŀռ��С����sizeof(Sales_data)
	//sizeof data.revenue;//Sales_data��revenue��Ա��Ӧ���͵Ĵ�С
	//sizeof Sales_data::revenue;//��һ�ֻ�ȡrevenue��С�ķ�ʽ

	/*int i = 10, &r=i;
	int j = 20;
	r = j;*/

	// sizeof(ia)/sizeof(*ia)����ia��Ԫ������
	//constexpr size_t = sizeof(ia) / sizeof(*ia);
	//int arr2[sz];//��ȷ��sizeof����һ���������ʽ

	//vector<int> ivec = { 1,2,3,4,5 };
	//vector<int>::size_type cnt = ivec.size();
	//// ���Ѵ�size��1��ֵ����ivec��Ԫ��
	//for (vector<int>::size_type ix = 0; ix != ivec.size(); ++ix,--cnt)
	//	ivec[ix] = cnt;
	//for (size_t i = 0; i < ivec.size(); i++)
	//{
	//	cout << ivec[i] << endl;
	//}

	//bool flag; char cval;
	//short sval; unsigned short usval;
	//int ival; unsigned int uival;
	//long lval; unsigned long ulval;
	//float fval; double dval;

	//3.14159L + 'a';// 'a'������int��Ȼ���intֵת����long double
	//dval + ival;// ivalת����double
	//dval + fval;// fvalת����double
	//ival = dval;// dval(�г�С�����ֺ�)ת����int
	//flag = dval;// ���dval��0����flag��false������flag��true
	//cval + fval;// cval������int��Ȼ���intֵת����float
	//sval + cval;// sval��cval��������Ϊint
	//cval + lval;// cvalת��Ϊlong
	//ival + ulval;// ivalת��Ϊunsigned long
	//usval + ival;// ����unsigned short��int��ռ�ռ�Ĵ�С��������
	//uival + lval;// ����unsigned int��long��ռ�ռ�Ĵ�С����ת��

	/*int i[] = { 1,2,3,4,5 };
	int (&r)[5] = i;*/

	//int i;
	//const int &j = i;// �ǳ���ת����const int������
	//const int *p = &i;// �ǳ����ĵ�ַת����const�ĵ�ַ
	//int &r = j, *q = p;// ���󣺲�����constת���ɷǳ���

	//const char *cp;
	//// ����static_cast����ת����const����
	//char *q = static_cast<char*>(cp);
	//static_cast<string>(cp);// ��ȷ���ַ�������ֵת����string����
	//const_cast<string>(cp);// ����const_castֻ�ܸı䳣������

	int i = 10;
	//i++ = 20;
	cout << i << endl;
	++i = 20;
	cout << i << endl;
	
	system("pause");
	return 0;
}