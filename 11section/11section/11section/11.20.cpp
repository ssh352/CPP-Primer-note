#include <iostream >
#include <map>
#include <string>

using namespace std;

// ���±�ĸ����ױ�Щ����⣬��Ϊinsert����һ������ֵ�������鷳
int main(void)
{
    //// ͳ��ÿ�������������г��ֵĴ���
    map<string, size_t> word_count;     // ��string��size_t�Ŀ�map
    string word;
    while (cin >> word)
        ++word_count.insert({ word, 0 }).first->second;                 // ��ȡword�ļ������������1
    for (const auto &w : word_count)    // ��map�е�ÿ��Ԫ��
        // ��ӡ���
        cout << w.first << " occurs " << w.second
        << ((w.second > 1) ? " times" : " times") << endl;

    return 0;
}