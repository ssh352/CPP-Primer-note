//#include <iostream>
//#include <string>
//#include <vector>
//#include <cctype>//��������iostream��
//#include <cstddef>//���������±�size_t��ָ�����ptrdiff_t����
//#include <iterator>//����⺯��begin��end
//#include <cstring>
//#include <stdexcept>
//#include <exception>
//#include <initializer_list>
//#include <cstdlib> // ����main������������EXIT_FAILURE��EXIT_SUCCESS
//#include <cassert> // ����assert
//#include <fstream>
//#include <sstream>
//#include <list>
//#include <array>
//#include <deque>
//#include <forward_list>
//using std::cout;
//using std::cin;
//using std::endl;
//using std::cerr;
//using std::string;
//using std::vector;
//using std::begin;
//using std::end;
//using std::runtime_error;
//using std::exception;
//using std::initializer_list;
//using std::iostream;
//using std::istream;
//using std::ostream;
//using std::flush;
//using std::ends;
//using std::unitbuf;
//using std::nounitbuf;
//using std::fstream;
//using std::ifstream;
//using std::ofstream;
//using std::stringstream;
//using std::istringstream;
//using std::ostringstream;
//using std::list;
//using std::deque;
//using std::array;
//using std::forward_list;
//
//typedef string::size_type sz;
//
//class Sales_data
//{
//	// ΪSales_data�ķǳ�Ա������������Ԫ����
//	friend Sales_data add(const Sales_data&, const Sales_data&);
//	friend istream &read(istream&, Sales_data&);
//	friend ostream &print(ostream&, const Sales_data&);
//public:		// ����˷���˵����
//			// ����Ĭ�Ϲ��캯����������ֻ����һ��stringʵ�εĹ��캯��������ͬ
//	Sales_data(std::string s = "") :bookNo(s) {}
//	Sales_data(const std::string &s, unsigned n, double p) :
//		bookNo(s), units_sold(n), revenue(p*n) {}
//	Sales_data(std::istream&);
//	Sales_data(const Sales_data &sa) { cout << "��������" << endl; };
//	std::string isbn() const { return bookNo; }
//	Sales_data &combine(const Sales_data&);
//
//private:	// ����˷���˵����
//	double avg_price() const { return units_sold ? revenue / units_sold : 0; }
//	string bookNo;
//	unsigned units_sold = 0;
//	double revenue = 0.0;
//
//	istream &myread(istream &is)
//	{
//		double price = 0;
//		is >> bookNo >> units_sold >> price;
//		revenue = price*units_sold;
//		return is;
//	}
//
//	ostream &myprint(ostream &os) const
//	{
//		os << isbn() << " " << units_sold << " " << revenue << " " << avg_price();
//		return os;
//	}
//
//	Sales_data myadd(const Sales_data &lhs) const
//	{
//		Sales_data sum = lhs; // ��lhs�����ݳ�Ա������sum
//		sum.combine(*this); // ��rhs�����ݳ�Ա�ӵ�sum����
//		return sum;
//	}
//};
//
//// Sales_data�ӿڵķǳ�Ա��ɲ��ֵ�����
//Sales_data add(const Sales_data&, const Sales_data&);
//istream &read(istream&, Sales_data&);
//ostream &print(ostream&, const Sales_data&);
//
//Sales_data& Sales_data::combine(const Sales_data &rhs)
//{
//	units_sold += rhs.units_sold; // ��rhs�ĳ�Ա�ӵ�this����ĳ�Ա��
//	revenue += rhs.revenue;
//	return *this; // ���ص��øú����Ķ���
//}
//
//istream &read(istream &is, Sales_data &item)
//{
//	return item.myread(is);
//}
//
//ostream &print(ostream &os, const Sales_data &item)
//{
//	return item.myprint(os);
//}
//
//Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
//{
//	return lhs.myadd(rhs);
//}
//
//Sales_data::Sales_data(std::istream &is)
//{
//	read(is, *this); // read�����������Ǵ�is�ж�ȡһ��������ϢȻ�����this������
//}
//
//class Person
//{
//	int age;
//	string name;
//};
//
//void ex01()
//{
//	//deque<string> container;
//
//	//vector<Person> vecper(10);
//
//	//Person p;
//	////vector<Person> vecper2(p);	// error
//
//	//// �ӱ�׼�����ȡ���ݣ���ÿ�����ʷŵ�����ĩβ
//	//string word;
//	//while (cin >> word)
//	//	container.push_back(word);
//
//	//list<int> ilist;
//	////// ��Ԫ����ӵ�ilist��ͷ
//	////for (size_t ix = 0; ix != 4; ++ix)
//	////	ilist.push_front(ix);
//
//	//deque<int> deqi;
//	//cout << deqi.max_size() << endl;
//
//	//vector<string> svec;
//	list<string> slist;
//
//	//// �ȼ������slist.push_front("Hello!");
//	//slist.insert(slist.begin(), "Hello");
//
//	//// vector��֧��push_front�������ǿ��Բ��뵽begin()֮ǰ
//	//// ���棺���뵽vectorĩβ֮����κ�λ�ö����ܺ���
//	//svec.insert(svec.begin(), "Hello!");
//	//svec.insert(svec.end(), 10, "����");
//
//	//vector<string> v = { "����","ӳ��","����","����","����" };
//	//// ��v���������Ԫ����ӵ�slist�Ŀ�ʼλ��
//	//slist.insert(slist.begin(), v.end() - 1, v.end());
//	//slist.insert(slist.end(), { "����","ǧ��","����","İ��" });
//	//// ����ʱ���󣺵�������ʾҪ�����ķ�Χ������ָ����Ŀ��λ����ͬ������
//	//slist.insert(slist.begin(), slist.begin(), slist.end());
//
//	//list<string> lst;
//	//auto iter = lst.begin();
//
//	//string word;
//	//list<string> lst;
//	//auto iter = lst.begin();
//	//while (cin >> word)
//	//	iter = lst.insert(iter, word);	// �ȼ��ڵ���push_fornt
//	// ���while���������iter��insert�ķ���ֵ��iter������insert��ʧЧ
//
//	//for (auto var : lst)
//	//{
//	//	cout << var << endl;
//	//}
//
//	//vector<Sales_data> c;
//	//// ��c��ĩβ����һ��Sales_data����
//	//// ʹ������������Sales_data���캯��
//	//c.emplace_back("978-0590353403", 25, 15.99);
//	//// ����û�н�������������push_back�汾
//	////c.push_back("978-0590353403", 25, 15.99);
//	//// ��ȷ������һ����ʱ��Sales_data���󴫵ݸ�push_back
//	//c.push_back(Sales_data("978-0590353403", 25, 15.99));
//	//// �����������ο������죬��vector�ڲ�ʵ��
//
//	//list<Sales_data> c;
//	//c.emplace_back();	// ʹ��Sales_data��Ĭ�Ϲ��캯��
//	//c.emplace(iter, "999-999999999");	// ʹ��Sales_data(string)
//	//// ʹ��Sales_data�Ľ���һ��ISBN��һ��count��һ��price�Ĺ��캯��
//	//c.emplace_front("978-0590353403", 25, 25.99);
//}
//
//void ex02()
//{
//	vector<int> c;
//	// �ڽ�����һ�������������front��back֮ǰ����ƺ�����Ԫ��
//	if (!c.empty())
//	{
//		// val��val2��c�е�һ��Ԫ��ֵ�Ŀ���
//		auto val = *c.begin(), val2 = c.front();
//		// val3��val4��c�����һ��Ԫ��ֵ�Ŀ���
//		auto last = c.end();
//		auto val3 = *(--last);	// ���ܵݼ�forward_list������
//		auto val4 = c.back();	// forward_list��֧��
//	}
//
//	if (!c.empty()) {
//		c.front() = 42;		// ��42����c�е�һ��Ԫ��
//		auto &v = c.back();	// ���ָ�����һ��Ԫ�ص�����
//		v = 1024;
//		auto v2 = c.back();	// �ı�c�е�Ԫ��
//		v2 = 0;				// δ�ı�c�е�Ԫ��
//	}
//
//	vector<string> svec;	// ��vector
//	cout << svec[0];		// ����ʱ����svec��û��Ԫ��
//	cout << svec.at(0);		// �׳�һ��out_of_range�쳣
//}
//
//void ex03()
//{
//	//list<int> ilist;
//	//while (!ilist.empty()) {
//	//	process(ilist.front());	// ��ilist����Ԫ�ؽ���һЩ����
//	//	ilist.pop_front();		// ��ɴ����ɾ����Ԫ��
//	//}
//
//	list<int> lst = { 0,1,2,3,4,5,6,7,8,9 };
//	auto it = lst.begin();
//	while (it != lst.end())
//		if (*it % 2 == 0)		// ��Ԫ��Ϊ����
//			it = lst.erase(it);	// ɾ����Ԫ��
//		else
//			++it;
//}
//
//// 9.3.4 �����forward_list����
//void ex04()
//{
//	forward_list<int> flst = { 0,1,2,3,4,5,6,7,8,9 };
//	auto prev = flst.before_begin();		// ��ʾflst��"��ǰԪ��"
//	auto curr = flst.begin();				// ��ʾflst�еĵ�һ��Ԫ��
//	while (curr != flst.end()) {			// ����Ԫ��Ҫ����
//		if (*curr % 2)						// ��Ԫ��Ϊ����
//			curr = flst.erase_after(prev);	// ɾ�������ƶ�curr
//		else {
//			prev = curr;					// �ƶ�������curr��ָ����һ��Ԫ�أ�prevָ��curr֮ǰ��Ԫ��
//			++curr;
//		}
//	}
//
//	for (auto var : flst)
//	{
//		cout << var << endl;
//	}
//}
//
//// 9.3.5 �ı�������С
//void ex05()
//{
//	list<int> ilist(10, 42);	// 10��int: ÿ����ֵ����42
//	ilist.resize(15);			// ��5��ֵΪ0��Ԫ����ӵ�ilist��ĩβ
//	ilist.resize(25, -1);		// ��10��ֵΪ-1��Ԫ����ӵ�ilist��ĩβ
//	ilist.resize(5);			// ��ilistĩβɾ��20��Ԫ��
//}
//
//// 9.3.6 ������������ʹ������ʧЧ
//void ex06()
//{
//	//// ɵ��ѭ����ɾ��żԪ�أ�����ÿ������Ԫ��
//	//vector<int> vi = { 0,1,2,3,4,5,6,7,8,9 };
//	//auto iter = vi.begin();	// ����begin������cbegin����Ϊ����Ҫ�ı�vi
//	//while (iter != vi.end()) {
//	//	if (*iter % 2) {
//	//		iter = vi.insert(iter, *iter);	// ���Ƶ�ǰԪ��
//	//		iter += 2;	// ��ǰ�ƶ���������������ǰԪ���Լ����뵽��֮ǰ��Ԫ��
//	//	}
//	//	else
//	//		iter = vi.erase(iter);	// ɾ��ż��Ԫ��
//	//		// ��Ӧ��ǰ�ƶ���������iterֻ������ɾ����Ԫ��֮���Ԫ��
//	//}
//
//	//for (auto var : vi)
//	//{
//	//	cout << var << " ";
//	//}
//	//cout << endl;
//
//	vector<int> v;
//	// ���ѣ���ѭ������Ϊ��δ�����
//	auto begin = v.begin(),
//		end = v.begin();
//	while (begin != end) {
//		// ��һЩ����
//		// ������ֵ����begin���¸�ֵ������Ļ����ͻ�ʧЧ
//		++begin;	// ��ǰ�ƶ�begin����Ϊ�������ڴ�Ԫ��֮�����Ԫ��
//		begin = v.insert(begin, 42);
//		++begin;	//  ��ǰ�ƶ�begin���������Ǹոռ����Ԫ��
//	}
//
//	// ����ȫ�ķ�������ÿ��ѭ�������/ɾ��Ԫ�غ����¼���end
//	while (begin != v.end()) {
//		// ��һЩ����
//		++begin;	// ��ǰ�ƶ�begin����Ϊ�������ڴ�Ԫ��֮�����Ԫ��
//		begin = v.insert(begin, 42);	// ������ֵ
//		++begin;	// ��ǰ�ƶ�begin���������Ǹոռ����Ԫ��
//	}
//}
//
//void pluralize(size_t cnt, string &word)
//{
//	if (cnt > 1)
//		word.push_back('s');	// �ȼ���word += 's'
//}
//
//int main()
//{
//	//ex01();
//
//	//ex02();
//
//	//ex04();
//
//	//ex06();
//
//	system("pause");
//	return 0;
//}