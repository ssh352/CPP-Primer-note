#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

map<string, string> buildMap(ifstream &map_file)
{
    map<string, string> trans_map;
    string key;
    string value;
    while (map_file >> key&&getline(map_file, value)) {
        if (value.size() > 1)
            trans_map[key] = value.substr(1);
    }

    return trans_map;
}

string transform(string word, map<string, string> trans_map)
{
    return trans_map.find(word) == trans_map.end() ? word : trans_map[word];
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

int main(void)
{
    ifstream map_file;
    ifstream input;
    map_file.open("map_file.txt");
    input.open("input.txt");
    word_transform(map_file, input);

    system("pause");
    return 0;
}