#include <iostream>
#include <map>
#include <string>
#include <vector>

using std::string;
using std::multimap;
using std::vector;

int main(void)
{
    multimap<string, string> family;
    family.insert({ "��", "��" });
    family.insert({ "��", "ӳ��" });
    family.insert({ "��", "����" });

    for (const auto &var : family)
    {
        std::cout << var.first << " " << var.second << std::endl;
    }

    system("pause");
    return 0;
}