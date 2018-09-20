#include <map>
#include <iterator>
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    map<string, size_t> word_count;
    // ���һ��ָ����Ԫ�صĵ�����
    map<string, size_t>::const_iterator map_it = word_count.cbegin();
    // �Ƚϵ�ǰ��������β�������
    while (map_it != word_count.cend()){
        // �����õ���������ӡ�ؼ���-ֵ��
        cout << map_it->first << " occurs "
            << map_it->second << " times" << endl;
        ++map_it;       // �������������ƶ�����һ��Ԫ��
    }

    return 0;
}