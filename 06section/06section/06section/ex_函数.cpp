#include "Chen_Yin.h"
#include "Chapter6.h"
void f1() { /* ...*/ } // ��ʽ�ض�����β��б�
void f2() { /* ...*/ } // ��ʽ�ض�����β��б�
//int f3(int v1, v2) { /* ...*/ } // ����
//int f4(int v1, int v2) { /* ...*/ } // ��ȷ
void fun(int, int v) {}; // �����ں������ڲ���ʹ�õ����βο��Բ�����

size_t count_calls()
{
	static size_t ctr = 0; // ���ý��������ֵ��Ȼ��Ч
	return ++ctr;
}

void reset(int *ip)
{
	*ip = 0; // �ı�ָ��ip��ָ�����ֵ
	ip = 0; // ֻ�ı���ip�ľֲ�������ʵ��δ���ı�
}

// �ú�������һ��int��������ã�Ȼ�󽫶����ֵ��Ϊ0
void reset(int &i) // i�Ǵ���reset�����Ķ������һ������
{
	i = 0; // �ı���i���������ֵ
}

void reset(const int &i)
{
	/* ...*/
}

// �Ƚ�����string����ĳ���
bool isShorter(const string &s1, const string &s2)
{
	return s1.size() < s2.size();
}

string::size_type find_char(const string &s, char c, string::size_type &occurs)
{
	auto ret = s.size(); // ��һ�γ��ֵ�Ϊֹ(����еĻ�)
	occurs = 0;
	for (decltype(ret) i = 0; i != s.size(); ++i)
	{
		if (s[i] == c) {
			if (ret == s.size())
				ret = i; // ��¼c��һ�γ��ֵ�λ��
			++occurs; // �����ֵĴ�����1
		}
	}
	return ret; // ���ִ���ͨ��occurs��ʽ�ط���
}

string::size_type find_char(string &s, char c, string::size_type &occurs)
{
	auto ret = s.size(); // ��һ�γ��ֵ�Ϊֹ(����еĻ�)
	occurs = 0;
	for (decltype(ret) i = 0; i != s.size(); ++i)
	{
		if (s[i] == c) {
			if (ret == s.size())
				ret = i; // ��¼c��һ�γ��ֵ�λ��
			++occurs; // �����ֵĴ�����1
		}
	}
	return ret; // ���ִ���ͨ��occurs��ʽ�ط���
}

// ������ʽ��ͬ������������print�����ǵȼ۵�
// ÿ����������һ��const int*���͵��β�
void print(const int*);
void print(const int[]); // ���Կ���������������ͼ��������һ������
void print(const int[10]); // �����ά�ȱ�ʾ�����������麬�ж���Ԫ�أ�ʵ�ʲ�һ��

void print(const char *cp)
{
	if (cp) // ��cp����һ����ָ��
		while (*cp) // ֻҪָ����ָ���ַ����ǿ��ַ�
			cout << *cp++; // �����ǰ�ַ�����ָ����ǰ�ƶ�һ��λ��
}

void print(const int *beg, const int *end)
{
	// ���beg��end֮��(����end)������Ԫ��
	while (beg != end)
		cout << *beg++ << endl; // �����ǰԪ�ز���ָ����ǰ�ƶ�һ��λ��
}

// const int ia[]�ȼ���const int* ia
// size��ʾ����Ĵ�С��������ʽ�ش����������ڿ��ƶ�iaԪ�صط���
void print(const int ia[], size_t size)
{
	for (size_t i = 0; i != size; ++i)
	{
		cout << ia[i] << endl;
	}
}

void print(int(&arr)[10])
{
	for (auto elem : arr)
		cout << elem << endl;
}

// matrixָ���������Ԫ�أ��������Ԫ������10���������ɵ�����
void print(int(*matrix)[10], int rowSize) { /* ...*/ }

void error_msg(initializer_list<string> il)
{
	for (auto beg = il.begin(); beg != il.end(); ++beg)
		cout << *beg << " ";
	cout << endl;
}

void swap(int &v1, int &v2)
{
	// �������ֵ����ȵģ�����Ҫ������ֱ���˳�
	if (v1 == v2)
		return;
	// �������ִ�е������˵������Ҫ�������ĳЩ����
	int tmp = v2;
	v2 = v1;
	v1 = tmp;
	// �˴�������ʾ��return���
}

//bool str_subrange(const string &str1, const string &str2)
//{
//	// ��С��ͬ����ʱ����ͨ��������жϽ����Ϊ����ֵ
//	if (str1.size() == str2.size())
//		return str1 == str2; // ��ȷ��==��������ز���ֵ
//	auto size = (str1.size() < str2.size()) ? str1.size() : str2.size();
//	// �������string����Ķ�Ӧ�ַ��Ƿ���ȣ��Խ϶̵��ַ�������Ϊ��
//	for (decltype(size) i = 0; i != size; ++i)
//	{
//		if (str1[i] != str2[i])
//			return; // ���� #1��û�з���ֵ����������������һ����
//	}
//	// ���� #2��������������δ�����κ�ֵ�ͽ����˺�����ִ��
//	// ���������ܼ�鲻����һ����
//}

char &get_val(string &str, string::size_type ix)
{
	return str[ix];
}

// ����val�Ľ׳ˣ���1 * 2 * 3... * val
int factorial(int val)
{
	if (val > 1)
		return val*factorial(val - 1);
	return 1;
}

//typedef int arrT[10]; // arrT��һ�����ͱ���������ʾ�������Ǻ���10������������
//using arrT = int[10]; // �ȼ�����һ�д��룬�μ�60ҳ
//arrT* func(int i); // func����һ��ָ����10�������������ָ��

//int *func2(int i);

//int(*func(int i))[10];
//int(&func2(int i))[10];
//auto func3(int i)->int(*)[10]
//{
//	cout << "func3" << endl;
//	static int arr[10] = {1,2,3,4,5};
//	return &arr;
//}

int odd[] = { 1,3,5,7,9 };
int even[] = { 0,2,4,6,8 };
// ����һ��ָ�룬��ָ��ָ����5������������
decltype(odd) *arrPty(int i)
{
	return (i % 2) ? &odd : &even; // ����һ��ָ�������ָ��
}

int main(int argc, char *argv[])
{
	/*int num;
	if (cin >> num) {
		int result = fact(num);
		cout << result << endl;
	}*/

	//fact("hello"); // ����ʵ�����Ͳ���ȷ
	//fact(); // ����ʵ����������
	//fact(42, 10, 0); // ����ʵ����������
	//fact(3.14); // ��ȷ����ʵ����ת����int����

	/*for (size_t i = 0; i != 10; ++i)
	cout << count_calls() << endl;*/

	//int i = 42;
	//reset(&i); // �ı�i��ֵ����i�ĵ�ַ
	//cout << "i = " << i << endl; // ���i = 0

	//int j = 42;
	//reset(j); // j���ô����÷�ʽ������ֵ���ı�
	//cout << "j = " << j << endl; // ���j = 0

	/*int i = 2;
	switch (i)
	{
	case 1:
		int j;
		j= 10;
		break;
	case 2:
		j = 20;
		break;
	}*/

	//const int ci = 42; // ���ܸı�ci��const�Ƕ����
	//int i = ci; // ��ȷ��������ciʱ�����������Ķ���const
	//int * const p = &i; // const�Ƕ���ģ����ܸ�p��ֵ
	//*p = 0; // ��ȷ��ͨ��p�ı���������������ģ�����i�����0

	//int i = 42;
	//const int *cp = &i; // ��ȷ������cp���ܸı�i
	//const int &r = i; // ��ȷ������r���ܸı�i
	//const int &r2 = 42; // ��ȷ
	//int *p = cp; // ����p�����ͺ�cp�����Ͳ�ƥ��
	//int &r3 = r; // ����r3�����ͺ�r�����Ͳ�ƥ��
	//int &r4 = 42; // ���󣺲���������ֵ��ʼ��һ���ǳ�������

	//int i = 0;
	//const int ci = i;
	//string::size_type ctr = 0;
	//reset(&i); // �����β�����ʱint*��reset����
	//reset(&ci); // ���󣺲�����ָ��const int�����ָ���ʼ��int *
	//reset(i); // �����β�������int&��reset����
	//reset(ci); // ���󣺲��ܰ���ͨ���ð󶨵�const����ci��
	//reset(42); // ���󣺲��ܰ���ͨӦ�ð󶨵�����ֵ��
	//reset(ctr); // �������Ͳ�ƥ�䣬ctr���޷�������
	//// ��ȷ��find_char�ĵ�һ���β��ǶԳ���������
	//find_char("Hello World!", 'o', ctr);

	/*const int &r = 10;
	const int i = 10;
	int j = 20;
	reset(i);
	const int *p = &j;
	reset(p);*/

	/*double i = 10.1;
	reset(i);*/

	//int i = 0, j[2] = { 0,1 };
	//print(&i); // ��ȷ��&i������ʱint*
	//print(j); // ��ȷ��jת����int*��ָ��j[0]

	//int i = 0, j[2] = { 0,1 };
	//int k[10] = { 0,1,2,3,4,5,6,7,8,9 };
	//print(&i); // ����ʵ�β��Ǻ���10������������
	//print(j); // ����ʵ�β��Ǻ���10������������
	//print(k); // ��ȷ��ʵ���Ǻ���10������������

	//argv[0] = "prog"; // ����argv[0]Ҳ����ָ��һ�����ַ���
	//argv[1] = "-d";
	//argv[2] = "-o";
	//argv[3] = "ofile";
	//argv[4] = "data0";
	//argv[5] = 0;

	//initializer_list<string> ls;
	//initializer_list<int> li;

	//string expected = "";
	//string actual = "";
	//// expected��actual��string����
	//if (expected != actual)
	//	error_msg({ "functionX", expected, actual });
	//else
	//	error_msg({ "functionX","okay" });

	/*if (expected != actual)
		error_msg(ErrCode(42), { "functionX", expected, actual });
	else
		error_msg(ErrCode(0), { "functionX","okay" });*/

		//string s("a value");
		//cout << s << endl; // ���a value
		//get_val(s, 0) = 'A'; // ��s[0]��ֵ��ΪA
		//cout << s << endl; // ���A value

		//cout << factorial(5) << endl;

		/*int nums[] = { 1,2,3,4,5 };
		int(*p)[5] = &nums;*/

		//int arr[10]; // arr��һ������10������������
		//int *p1[10]; // p1��һ������10��ָ�������
		//int(*p2)[10] = &arr; // p2��һ��ָ�룬ָ����10������������

	system("pause");
	return 0;
}

//void error_msg(ErrCode e, initializer_list<string> il)
//{
//	cout << e.msg() << "��";
//	for (const auto &elem : il)
//		cout << elem << " ";
//	cout << endl;
//}

//vector<string> process()
//{
//	// ...
//	// expected��actual��string����
//	if (expected.empty())
//		return {}; // ����һ����vector����
//	else if (expected == actual)
//		return { "functionX","okay" }; // �����б��ʼ����vector����
//	else
//		return { "functionX",expected,actual };
//}

//int main()
//{
//	if (some_failure)
//		return EXIT_FAILURE; // ������cstdlibͷ�ļ���
//	else
//		return EXIT_SUCCESS; // ������cstdlibͷ�ļ���
//}