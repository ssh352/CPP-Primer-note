#include <iostream>
#include <string>
#include <vector>
#include <cctype>//��������iostream��
#include <cstddef>//���������±�size_t��ָ�����ptrdiff_t����
#include <iterator>//����⺯��begin��end
#include <cstring>
#include <stdexcept>
#include <exception>
#include <initializer_list>
#include <cstdlib> // ����main������������EXIT_FAILURE��EXIT_SUCCESS
#include <cassert> // ����assert
#include <fstream>
#include <sstream>
#include <list>
#include <array>
#include <deque>
#include <forward_list>
#include <stack>
#include <queue>
#include <algorithm>
#include <numeric>
#include <functional>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include "Sales_data.h"
using std::cout;
using std::cin;
using std::endl;
using std::cerr;
using std::string;
using std::vector;
using std::begin;
using std::end;
using std::runtime_error;
using std::exception;
using std::initializer_list;
using std::iostream;
using std::istream;
using std::ostream;
using std::flush;
using std::ends;
using std::unitbuf;
using std::nounitbuf;
using std::fstream;
using std::ifstream;
using std::ofstream;
using std::stringstream;
using std::istringstream;
using std::ostringstream;
using std::list;
using std::deque;
using std::array;
using std::forward_list;
using std::to_string;
using std::stack;
using std::queue;
using std::stoi;
using std::stol;
using std::stoll;
using std::stold;
using std::stod;
using std::stof;
using std::stoul;
using std::stoull;
using std::find;
using std::placeholders::_1;
using std::istream_iterator;
using std::ostream_iterator;
using namespace std::placeholders;
using std::map;
using std::set;
using std::multimap;
using std::multiset;
using std::unordered_map;
using std::unordered_set;
using std::unordered_multimap;
using std::unordered_multiset;
using std::pair;

typedef string::size_type sz;

// 11.1
void ex01()
{
    //// ͳ��ÿ�������������г��ֵĴ���
    //map<string, size_t> word_count;     // ��string��size_t�Ŀ�map
    //string word;
    //while (cin >> word)
    //    ++word_count[word];                 // ��ȡword�ļ������������1
    //for (const auto &w : word_count)    // ��map�е�ÿ��Ԫ��
    //    // ��ӡ���
    //    cout << w.first << " occurs " << w.second
    //    << ((w.second > 1) ? " times" : " times") << endl;

    // ͳ��ÿ�������������г��ֵĴ���
    map<string, size_t> word_count;     // ��string��size_t�Ŀ�map
    set<string> exclude = { "The", "But", "And", "Or", "An", "A",
        "the", "but", "and", "or", "an", "a" };
    string word;
    while (cin >> word)
        // ֻͳ�Ʋ���exclude�еĵ���
        if (exclude.find(word) == exclude.end())
            ++word_count[word];         // ��ȡword�ļ������������1
    for (const auto &w : word_count)    // ��map�е�ÿ��Ԫ��
        // ��ӡ���
        cout << w.first << " occurs " << w.second
        << ((w.second > 1) ? " times" : " times") << endl;
}

pair<string, int>
process(vector<string> &v)
{
    // ����v
    if (!v.empty())
        return{ v.back(), v.back().size() };    // �б��ʼ��
    /*if (!v.empty())
        return pair<string, int>(v.back(), v.back().size());*/
    /*if (!v.empty())
        return make_pair(v.back(), v.back().size());*/
    else
        return pair<string, int>();             // ��ʽ���췵��ֵ
}

// 11.2
void ex02()
{
    /*map<string, size_t> word_count;     // ������
    // �б��ʼ��
    set<string> exclude = { "The", "But", "And", "Or", "An", "A",
        "the", "but", "and", "or", "an", "a" };
    // ����Ԫ�أ�authors����ӳ��Ϊ��
    map<string, string> author = { { "Joyce", "James" },
    { "Austen", "Jane" },
    { "Dickens", "Charles" } };
    */

    /*// ����һ����20��Ԫ�ص�vector������0��9ÿ����������������
    vector<int> ivec;
    for (vector<int>::size_type i = 0; i != 10; ++i){
        ivec.push_back(i);
        ivec.push_back(i); // ÿ�����ظ�����һ��
    }
    // iset��������ivec�Ĳ��ظ���Ԫ�أ�miset��������20��Ԫ��
    set<int> iset(ivec.cbegin(), ivec.cend());
    multiset<int> miset(ivec.cbegin(), ivec.cend());
    cout << ivec.size() << endl;        // ��ӡ��20
    cout << iset.size() << endl;        // ��ӡ��10
    cout << miset.size() << endl;       // ��ӡ��20
	*/

    // bookstore�ж�����¼��������ͬ��ISBN
    // bookstore�е�Ԫ����ISBN��˳���������
    /*multiset<Sales_data, decltype(compareIsbn) *>
        bookstore(compareIsbn);*/

    pair<string, string> anon;      // ��������string
    pair<string, size_t> word_count;    // ����һ��string��һ��size_t
    pair<string, vector<int>> line;     // ����string��vector<int>
    // ����Ϊÿ����Ա�ṩֵ��ʼ����
    pair<string, string> author{ "James", "Joyce" };
}

void ex03()
{
    set<string>::value_type v1;         // v1��һ��string
    set<string>::key_type v2;           // v2��һ��string
    map<string, int>::value_type v3;    // v3��һ��pair<const string, int>
    map<string, int>::key_type v4;      // v4��һ��string
    map<string, int>::mapped_type v5;   // v5��һ��int
}

int main1()
{
    //ex01();
    ex02();

    system("pause");
    return 0;
}