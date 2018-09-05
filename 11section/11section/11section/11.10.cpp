#include <vector>
#include <list>
#include <map>

/*
���Զ���vector<int>::iterator��int��map����Ϊvector�ĵ������������������������<�����
�����Զ���list<int>::iterator��int��map����Ϊlist�ĵ�������˫���������û�ж�����<�����
*/
int main(void)
{
    std::vector<int> ivec{ 1, 2, 3, 4, 5 };
    std::list<int> ilst{ 6, 7, 8, 9, 10 };

    std::map<std::vector<int>::iterator, int> imap;

    std::map<std::list<int>::iterator, int> lmap;

    for (std::vector<int>::iterator iter = ivec.begin(); iter < ivec.end(); ++iter)
    {
        imap[iter] = *iter;
    }

    /*for (std::list<int>::iterator iter = ilst.begin(); iter < ilst.end(); ++iter)
    {
        lmap[iter] = *iter;
    }*/

    return 0;
}