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
using std::hash;

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

map<string, string> buildMap(ifstream &map_file)
{
    map<string, string> trans_map;      // ����ת������
    string key;                         // Ҫת���ĵ���
    string value;                       // �滻�������
    // ��ȡ��һ�����ʴ���key�У�����ʣ�����ݴ���value
    while (map_file >> key && getline(map_file, value))
    if (value.size() > 1) // ����Ƿ���ת������
        //trans_map[key] = value.substr(1);   // ����ǰ���ո�
        trans_map.insert({ key, value.substr(1) });
    else
        throw runtime_error("no rule for " + key);

    return trans_map;
}

const string &transform(const string &s, const map<string, string> &m)
{
    // ʵ�ʵ�ת���������˲����ǳ���ĺ���
    auto map_it = m.find(s);
    // ���������ת������map��
    if (map_it != m.cend())
        return map_it->second;  // ʹ���滻����
    else
        return s;               // ���򷵻�ԭstring
}

void word_transform(ifstream &map_file, ifstream &input)
{
    auto trans_map = buildMap(map_file);    // ����ת������
    string text;                            // ���������е�ÿһ��
    while (getline(input, text)){           // ��ȡһ������
        istringstream stream(text);         // ��ȡÿ������
        string word;
        bool firstword = true;              // �����Ƿ��ӡ�ո�
        while (stream >> word){
            if (firstword)
                firstword = false;
            else
                cout << " ";                // �ڵ��ʼ��ӡһ���ո�
            // transform�������ĵ�һ����������ת��֮�����ʽ
            cout << transform(word, trans_map); // ��ӡ���
        }
        cout << endl;                       // ���һ�е�ת��
    }
}

void ex03()
{
    /*set<string>::value_type v1;         // v1��һ��string
    set<string>::key_type v2;           // v2��һ��string
    map<string, int>::value_type v3;    // v3��һ��pair<const string, int>
    map<string, int>::key_type v4;      // v4��һ��string
    map<string, int>::mapped_type v5;   // v5��һ��int
    */

    /*map<string, size_t> word_count;
    // ���ָ��word_count��һ��Ԫ�صĵ�����
    auto map_it = word_count.begin();
    // *map_it��ָ��һ��pair<const string, size_t>���������
    cout << map_it->first;              // ��ӡ��Ԫ�صĹؼ���
    cout << " " << map_it->second;      // ��ӡ��Ԫ�ص�ֵ
    //map_it->first = "new key";          // ���󣺹ؼ�����const��
    ++map_it->second;                   // ��ȷ�����ǿ���ͨ���������ı�Ԫ��
    */

    /*set<int> iset = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    set<int>::iterator set_it = iset.begin();
    if (set_it != iset.end()){
    //*set_it = 42;               // ����set�еĹؼ�����ֻ����
    cout << *set_it << endl;    // ��ȷ�����Զ��ؼ���
    }*/

    /*map<string, size_t> word_count;
    // ���һ��ָ����Ԫ�صĵ�����
    auto map_it = word_count.cbegin();
    // �Ƚϵ�ǰ��������β�������
    while (map_it != word_count.cend()){
    // �����õ���������ӡ�ؼ���-ֵ��
    cout << map_it->first << " occurs "
    << map_it->second << " times" << endl;
    ++map_it;       // �������������ƶ�����һ��Ԫ��
    }*/

    /*vector<int> ivec = { 2, 4, 6, 8, 2, 4, 6, 8 };      // ivec��8��Ԫ��
    set<int> set2;                                      // �ռ���
    set2.insert(ivec.begin(), ivec.end());              // set2��4��Ԫ��
    set2.insert({ 1, 3, 5, 7, 1, 3, 5, 7 });            // set2��8��Ԫ��*/

    /*map<string, size_t> word_count;
    string word;
    // ��word_count����word��4�ַ���
    word_count.insert({ word, 1 });
    word_count.insert(make_pair(word, 1));
    word_count.insert(pair<string, size_t>(word, 1));
    word_count.insert(map<string, size_t>::value_type(word, 1));*/

    /*// ͳ��ÿ�������������ֳ��ִ�����һ�ָ������ķ���
    map<string, size_t> word_count; // ��string��size_t�Ŀ�map
    string word;
    while (cin >> word)
    {
    // ����һ��Ԫ��û�ؼ��ֵ���word��ֵΪ1;
    // ��word����word_count�У�insertʲôҲ����
    auto ret = word_count.insert({ word, 1 });
    if (!ret.second)            // word����word_count��
    ++ret.first->second;    // ����������
    }*/

    /*multimap<string, string> authors;
    // �����һ��Ԫ�أ��ؼ���ΪBarth��John
    authors.insert({ "Barth, John", "Sot-Weed Factor" });
    // ��ȷ����ӵڶ���Ԫ�أ��ؼ���Ҳ��Barth��John
    authors.insert({ "Barth, John", "Lost in the Funhouse" });*/

    /*map<string, size_t> word_count;
    string removal_word;
    // ɾ��һ���ؼ��֣�����ɾ����Ԫ������
    if (word_count.erase(removal_word))
    cout << "ok: " << removal_word << " removed\n";
    else
    cout << "oops: " << removal_word << " not found!\n";*/

    /*map<string, size_t> word_count; // empty map
    // ����һ���ؼ���ΪAnna��Ԫ�أ�����ֵ����ֵ��ʼ����Ȼ��1������
    word_count["Anna"] = 1;

    cout << word_count["Anna"]; // ��Anna��Ϊ�±���ȡԪ�أ����ӡ��1
    ++word_count["Anna"]; // ��ȡԪ�أ�������1
    cout << word_count["Anna"]; // ��ȡԪ�ز���ӡ�������ӡ��2*/

    /*set<int> iset = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    iset.find(1);   // ����һ����������ָ��key == 1��Ԫ��
    iset.find(11);  // ����һ������������ֵ����iset.end();
    iset.count(1);  // ����1
    iset.count(11); // ����0*/

    /*map<string, size_t> word_count;
    if (word_count.find("foobar") == word_count.end())
    cout << "foobar is not in the map" << endl;*/

    /*multimap<string, string> authors;
    string search_item("Alain de Botton");      // Ҫ���ҵ�����
    auto entries = authors.count(search_item);  // Ԫ�ص�����
    auto iter = authors.find(search_item);      // �����ߵĵ�һ����
    // ��һ��ѭ�����Ҵ����ߵ���������
    while (entries) {
    cout << iter->second << endl;           // ��ӡÿ����Ŀ
    ++iter;                                 // ǰ������һ����
    --entries;                              // ��¼�Ѿ���ӡ�˶��ٱ���
    }*/

    /*multimap<string, string> authors;
    string search_item("Alain de Botton");
    // authors��search_item�Ķ��壬��ǰ��ĳ���һ��
    // beg��end��ʾ��Ӧ�����ߵ�Ԫ�صķ�Χ
    for (auto beg = authors.lower_bound(search_item), end = authors.upper_bound(search_item);
    beg != end; ++beg)
    {
    cout << beg->second << endl;    // ��ӡÿ����Ŀ
    }

    // authors��search_item�Ķ��壬��ǰ��ĳ���һ��
    // beg��end��ʾ��Ӧ�����ߵ�Ԫ�صķ�Χ
    for (auto pos = authors.equal_range(search_item); pos.first != pos.second;
    ++pos.first)
    {
    cout << pos.first->second << endl;    // ��ӡÿ����Ŀ
    }*/

    /*ifstream map_file;
    ifstream input;
    map_file.open("map_file.txt");
    input.open("input.txt");
    word_transform(map_file, input);*/

}

size_t hasher(const Sales_data &sd)
{
    return hash<string>()(sd.isbn());
}

bool eqOp(const Sales_data &lhs, const Sales_data &rhs)
{
    return lhs.isbn() == rhs.isbn();
}

void ex04()
{
    /*
    // ͳ�Ƴ��ִ����������ʲ��ᰴ�ֵ�������
    unordered_map<string, size_t> word_count;
    string word;
    while (cin >> word)
        ++word_count[word];     // ��ȡ������word�ļ�����
    for (const auto &w : word_count)    // ��map�е�ÿ��Ԫ��
        // ��ӡ���
        cout << w.first << " occurs " << w.second << (w.second > 1 ? " times" : " time") << endl;
    */

    using SD_multiset = unordered_multiset<Sales_data,
        decltype(hasher)*, decltype(eqOp)*>;
    // ������Ͱ��С����ϣ����ָ���������ж������ָ��
    SD_multiset bookstore(42, hasher, eqOp);

    // ʹ��FooHash���ɹ�ϣֵ; Foo������==�����
    //unordered_set<Foo, decltype(FooHash)*> fooSet(10, FooHash);
}

int main1()
{
    //ex01();
    //ex02();
    ex03();

    system("pause");
    return 0;
}