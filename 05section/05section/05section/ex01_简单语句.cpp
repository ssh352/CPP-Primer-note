//#include <iostream>
//#include <string>
//#include <vector>
//#include <cctype>//��������iostream��
//#include <cstddef>//���������±�size_t��ָ�����ptrdiff_t����
//#include <iterator>//����⺯��begin��end
//#include <cstring>
//#include <stdexcept>
//#include "Sales_item.h"
//using std::cout;
//using std::cin;
//using std::endl;
//using std::string;
//using std::vector;
//using std::begin;
//using std::end;
//using std::runtime_error;
//
//int main()
//{
//	//while (cin >> s&&s != sought)
//	//	; // �����
//
//	//while (int i = get_num())// ÿ�ε���ʱ��������ʼ��i
//	//	cout << i << endl;
//	//i = 0;// ������ѭ���ⲿ�޷�����i
//
//	// Ѱ�ҵ�һ����ֵԪ��
//	//auto beg = v.begin();
//	//while (beg != v.end() && *beg >= 0)
//	//	++beg;
//	//if (beg == v.end())
//	//	// ��ʱ����֪��v�е�����Ԫ�ض����ڵ���0
//
//	//const vector<string> scores = { "F","D","C","B","A","A++" };
//	//// ���gradeС��60����Ӧ����ĸ��F;����������±�
//	//string lettergrade;
//	//if (grade < 60)
//	//	lettergrade = scores[0];
//	//else
//	//	lettergrade = scores[(grade - 50) / 10];
//
//	//const vector<string> scores = { "F","D","C","B","A","A++" };
//	//// ���gradeС��60����Ӧ����ĸ��F;����������±�
//	//string lettergrade;
//	//if (grade < 60)
//	//	lettergrade = scores[0];
//	//else{
//	//	lettergrade = scores[(grade - 50) / 10];// ��ȡ��ĸ��ʽ�ĳɼ�
//	//	if (grade != 100)// ֻҪ����A++���Ϳ�����ӼӺŻ����
//	//		if (grade % 10 > 7)
//	//			lettergrade += '+';// ĩβ��8����9�ĳɼ����Ҫ���Ӻ�
//	//		else if (grade % 10 < 3)
//	//			lettergrade += '-';// ĩβ��0��1����2�ĳɼ����һ������
//	//}
//
//	//// ����ʵ�ʵ�ִ�й��̲�����������ʽ��ʽ��������else��֧ƥ����ڲ�if���
//	//if (grade % 10 >= 3)
//	//	if (grade % 10 > 7)
//	//		lettergrade += '+';// ĩβ��8����9�ĳɼ����Ҫ���Ӻ�
//	//else
//	//	lettergrade += '-';// ĩβ��3��4��5��6����7�ĳɼ����һ������
//
//	//if (grade % 10 >= 3) {
//	//	if (grade % 10 > 7)
//	//		lettergrade += '+';// ĩβ��8����9�ĳɼ����Ҫ���Ӻ�
//	//}
//	//else
//	//	lettergrade += '-';// ĩβ��3��4��5��6����7�ĳɼ����һ������
//
//	/*cout << (10 > 12 ? "3" : 10 > 2 ? "1" : "2");*/
//
//	// Ϊÿ��Ԫ����ĸ��ʼ�������ֵ
//	//unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
//	//char ch;
//	//while (cin >> ch) {
//	//	// ���chʹԪ����ĸ�������Ӧ�ü���ֵ��1
//	//	switch (ch) {
//	//	case 'a':
//	//		++aCnt;
//	//		break;
//	//	case 'e':
//	//		++eCnt;
//	//		break;
//	//	case 'i':
//	//		++iCnt;
//	//		break;
//	//	case 'o':
//	//		++oCnt;
//	//		break;
//	//	case 'u':
//	//		++uCnt;
//	//		break;
//	//	}
//	//}
//	//// ������
//	//cout << "Number of vowel a: \t" << aCnt << '\n'
//	//	<< "Number of vowel e: \t" << eCnt << '\n'
//	//	<< "Number of vowel i: \t" << iCnt << '\n'
//	//	<< "Number of vowel o: \t" << oCnt << '\n'
//	//	<< "Number of vowel u: \t" << uCnt << endl;
//
//	//unsigned vowelCnt = 0;
//	//// ...
//	//switch (ch)
//	//{
//	//// ������a,e,i,o��u�е�����һ�����ὫvowelCnt��ֵ��1
//	//case 'a':
//	//case 'e':
//	//case 'i':
//	//case 'o':
//	//case 'u':
//	//	++vowelCnt;
//	//	break;
//	//}
//
//	// ���棺����ȷ�ĳ����߼���
//	//switch (ch)
//	//{
//	//	// ��һ�ֺϷ�����д��ʽ
//	//	case 'a': case 'e': case 'i': case 'o': case 'u':
//	//		++vowelCnt;
//	//		break;
//	//}
//
//	//switch (ch) {
//	//	case 'a':
//	//		++aCnt;// �˴�Ӧ����һ��break���
//	//	case 'e':
//	//		++eCnt;// �˴�Ӧ����һ��break���
//	//	case 'i':
//	//		++iCnt;// �˴�Ӧ����һ��break���
//	//	case 'o':
//	//		++ont;// �˴�Ӧ����һ��break���
//	//	case 'u':
//	//		++uCnt;
//	//}
//
//	// ���ch��һ��Ԫ����ĸ������Ӧ�ļ���ֵ��1
//	/*switch (ch) {
//	case 'a': case 'e': case 'i': case 'o': case 'u':
//		++vowelCnt;
//		break;
//	default:
//		++otherCnt;
//		break;
//	}*/
//
//	//case true:
//	//	// ��Ϊ�����ִ�����̿����ƿ�����ĳ�ʼ����䣬���Ը�switch��䲻�Ϸ�
//	//	string file_name;// ���󣺿������ƹ�һ����ʽ��ʼ���ı���
//	//	int ival = 0;// ���󣺿������ƹ�һ����ʽ��ʼ���ı���
//	//	int jval;// ��ȷ����Ϊjvalû�г�ʼ��
//	//	break;
//	//case false:
//	//	// ��ȷ��jval��Ȼ���������ڣ�������û�б���ʼ��
//	//	jval = next_num();// ��ȷ����jval��һ��ֵ
//	//	if(file_name.empty())// file_name�������ڣ�����û�г�ʼ��
//	//		// ...
//
//	//case true:
//	//{
//	//	// ��ȷ���������λ�������ڲ�
//	//	string file_name = get_file_name();
//	//	// ...
//	//}
//	//case false:
//	//	if(file_name.empty())// ����file_name����������֮��
//
//	//switch (int i = 10)
//	//{
//	//case 10:break;
//	//	}
//
//	//vector<int> v;
//	//int i;
//	//// �ظ��������ݣ�ֱ�������ļ�ĩβ��������������������
//	//while (cin >> i)
//	//	v.push_back(i);
//	//// Ѱ�ҵ�һ����ֵԪ��
//	//auto beg = v.begin();
//	//while (beg != v.end() && *beg >= 0)
//	//	++beg;
//	//if(beg==v.end())
//	//	// ��ʱ����ֱ��v������Ԫ�ض����ڵ���0
//
//	/*vector<int> v;
//	for (decltype(v.size) i = 0, sz = v.size(); i != sz; ++i)
//		v.push_back(v[i]);*/
//
//	//vector<int> v = { 0,1,2,3,4,5,6,7,8,9 };
//	////// ��Χ�����������������ͣ��������ܶ�Ԫ��ִ��д����
//	////for (auto &r : v)// ����v�е�ÿһ��Ԫ��
//	////	r *= 2;// ��v��ÿ��Ԫ�ص�ֵ����
//
//	//for (auto beg = v.begin(),end=v.end(); beg != end; ++beg) {
//	//	auto &r = *beg;// r�������������ͣ��������ܶ�Ԫ��ִ��д����
//	//	r *= 2;// ��v��ÿ��Ԫ�ص�ֵ����
//	//}
//
//	//for (auto r : v)
//	//	cout << r<<' ';
//	//cout << endl;
//
//	// ������ʾ�û�����һ������Ȼ�������
//	//string rsp;// ��Ϊѭ�������������ܶ�����do���ڲ�
//	//do {
//	//	cout << "please enter two values: ";
//	//	int val1 = 0, val2 = 0;
//	//	cin >> val1 >> val2;
//	//	cout << "The sum of " << val1 << " and " << val2
//	//		<< " = " << val1 + val2 << "\n\n"
//	//		<< "More? Enter yes or no: ";
//	//	cin >> rsp;
//	//} while (!rsp.empty() && rsp[0] != 'n');
//
//	//do {
//	//	// ...
//	//	mumble(foo);
//	//} while (int foo = get_foo());// ���󣺽���������������do����������
//
//	//string buf;
//	//while (cin >> buf && !buf.empty()) {
//	//	switch (buf[0])
//	//	{
//	//	case '-':
//	//		// ������һ���հ�Ϊֹ
//	//		for (auto it = buf.begin() + 1; it != buf.end(); ++it){
//	//			if (*it == ' ')
//	//				break;// #1���뿪forѭ��
//	//			//...
//	//		}
//	//		// break #1������Ȩת�Ƶ�����
//	//		// ʣ���'-'����
//	//		break; // #2���뿪switch���
//	//	case '+':
//	//		// ...
//	//	} // ����switch
//	//	// ����switch:break #2������Ȩת�Ƶ�����
//	//} // ����while
//
//	//string buf;
//	//while (cin >> buf && !buf.empty()) {
//	//	if (buf[0] != '_')
//	//		continue;// ���Ŷ�ȡ��һ������
//	//	//����ִ�й��̵������˵����ǰ�����������»��߿�ʼ�ģ����Ŵ���buf...
//	//}
//
//	//	// ...
//	//	goto end;
//	//	int ix = 10;// ����goto����ƹ���һ������ʼ���ı�������
//	//end:
//	//	// ���󣺴˴��Ĵ�����Ҫʹ��ix������goto����ƹ�����������
//	//	ix = 42;
//	//	cout << ix << endl;
//
//	// �������һ������ʼ���ı��������ǺϷ���
//	//begin:
//	//int sz = get_size();
//	//if (sz <= 0) {
//	//	goto begin;
//	//}
//
//	//Sales_item item1, item2;
//	//cin >> item1 >> item2;
//	//// ���ȼ��item1��item2�Ƿ��ʾͬһ���鼮
//	//if (item1.isbn() != item2.isbn()) {
//	//	throw runtime_error("Data must refer to same ISBN");
//	//}
//	//// �������ִ�е��������ʾ����ISBN����ͬ��
//	//cout << item1 + item2 << endl;
//
//	//Sales_item item1, item2;
//	//while (cin >> item1 >> item2) {
//	//	try {
//	//		// ִ���������Sales_item����Ĵ���
//	//		// ������ʧ�ܣ������׳�һ��runtime_error�쳣
//	//		// ���ȼ��item1��item2�Ƿ��ʾͬһ���鼮
//	//		if (item1.isbn() != item2.isbn()) {
//	//			throw runtime_error("Data must refer to same ISBN");
//	//		}
//	//		cout << item1 + item2 << endl;
//	//	}
//	//	catch (runtime_error err)
//	//	{
//	//		// �����û�����ISBN����һ�£�ѯ���Ƿ���������
//	//		cout << err.what() << "\nTry Again? Enter y or n" << endl;
//	//		char c;
//	//		cin >> c;
//	//		if (!cin || c == 'n')
//	//			break;// ����whileѭ��
//	//	}
//	//}
//
//	system("pause");
//	return 0;
//}