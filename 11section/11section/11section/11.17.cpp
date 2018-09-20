#include <set>
#include <vector>
#include<iterator>

int main(void)
{
    std::multiset<std::string> c;
    std::vector<std::string> v;

    copy(v.begin(), v.end(), inserter(c, c.end()));     // inserter���صĲ����������=���õ���insert
    //copy(v.begin(), v.end(), back_inserter(c));       // ����back_inserter���صĲ����������=���õ���push_back��setû��push_back
    copy(c.begin(), c.end(), inserter(v, v.end()));
    copy(c.begin(), c.end(), back_inserter(v));

    return 0;
}