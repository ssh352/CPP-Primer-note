#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;

/*
ʹ��set�����Լ��жϵ����Ƿ��Ѿ�����������
*/
int main(void)
{
    vector<string> words;
    string word;
    while (std::cin >> word)
    if (find(words.begin(), words.end(), word) == words.end())
        words.push_back(word);

    for (const auto &w : words)
    {
        std::cout << w << std::endl;
    }

    system("pause");
    return 0;
}