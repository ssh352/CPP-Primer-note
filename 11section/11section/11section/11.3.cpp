#include <iostream>
#include <string>
#include <map>
#include <set>

int main()
{
    std::map<std::string, std::size_t> words_count;
    std::set<std::string> exclude = { "��", "��", "һ", "��" };
    std::string word;

    while (std::cin >> word)
        if (exclude.find(word) == exclude.end())
            ++words_count[word];

    for (const auto &var : words_count)
        std::cout << var.first << "������" << var.second << "��" << std::endl;

    system("pause");
    return 0;
}