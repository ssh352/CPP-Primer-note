#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
int main2()
{
	//vector<int> ivec;//ivec����int���͵Ķ���
	//vector<Sales_item> Sales_vec;//����Sales_item���͵Ķ���
	//vector<vector<string>> file;//��������Ԫ����vector����

	/*vector<int> intVec = { 1,2,3,4,5 };
	vector<int> intVec2 = intVec;
	intVec2[1] = 10;
	for (int i : intVec2)
	{
		cout << i << "\t";
	}*/

	//vector<int> ivec;//��ʼ״̬Ϊ��
	////�˴���ivec���һЩֵ
	//vector<int> ivec2(ivec);
	//vector<int> ivec3 = ivec;
	//vector<string> svec(ivec2);//����svec��Ԫ����string���󣬲���int

	//vector<string> v1{ "a","an","the" };//�б��ʼ��
	//vector<string> v2( "a", "an", "the" );//����

	/*vector<int> ivec(10, -1);
	vector<string> svec(10, "hi!");
	for (int i : ivec)
	{
		cout << i;
	}
	cout << endl;
	for (string s : svec)
	{
		cout << s;
	}
	cout << endl;*/

	/*vector<int> vi = 10;*/

	/*vector<int> ivec(10, 10);
	vector<int> ivec2{ 10,10 };
	for (int i : ivec)
	{
		cout << i + " ";
	}
	cout << endl;
	for (int i : ivec2)
	{
		cout << i + " ";
	}
	cout << endl;*/

	//vector<int> v1(10);//v1��10��Ԫ�أ�ÿ����ֵ����0
	//vector<int> v2{ 10 };//v2��1��Ԫ�أ���Ԫ�ص�ֵ��10
	//vector<int> v3{ 10,1 };//v3��10��Ԫ�أ�ÿ����ֵ����1
	//vector<int> v4{ 10,1 };//v4��2��Ԫ�أ�ֵ�ֱ���10��1

	/*vector<string> s1 = { "haha","haha" };
	vector<string> s2{ s1 };
	s2[1] = "xixi";
	for (string i : s2)
	{
		cout << i << endl;
	}*/

	//vector<int> v2;	// empty vector
	//for (int i = 0; i != 100; ++i)
	//	v2.push_back(i);	//append sequential integers to v2
	//// at end of loop v2 has 100 elements, values 0 ... 99

	// read words from the standard input and stre them as elements in a vector
	//string word;
	//vector<string> text;	// empty vector
	//while (cin >> word)
	//{
	//	text.push_back(word);	//append word to text
	//}
	//for (string s : text)
	//{
	//	cout << s;
	//}

	//vector<int> v{ 1,2,3,4,5,6,7,8,9 };
	//for (auto &i : v)		// for each element in v (not: i is a reference)
	//	i *= i;				// square the element value
	//for (auto i : v)		// for each element in v
	//	cout << i << " ";	// print the element
	//cout << endl;
	
	// count the number of grades by clusters of ten: 0--9, 10--19, ... 90--99, 100
	//vector<unsigned> scores(11, 0);// 11 buckets, all initially 0
	//unsigned grade;
	//while (cin >> grade) {// read the grades
	//	if (grade <= 100)// handle only valid grades
	//		++scores[grade / 10];// increment the counter for the current cluster
	//}

	//vector<int> ivec;// empty vector
	//for (decltype(ivec.size()) ix = 0; ix != 10; ++ix)
	//	ivec[ix] = ix;// disaster: ivec has no elements

	//vector<int> ivec;// empty vector
	//for (decltype(ivec.size()) ix = 0; ix != 10; ++ix)
	//	ivec.push_back(ix);// ok: adds a new element with value ix

	//vector<int> ivec; // empty vector
	//cout << ivec[0];

	

	system("pause");
	return 0;
}