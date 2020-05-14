#include <fstream>
#include <string>
#include <iostream>
using namespace std;
int main()
{
    wifstream in;
    locale china("zh_CN.UTF-8");
    in.imbue(china);
    in.open(L"txt/ÄãºÃ.txt");
    wstring line;
    if (in)
    {
        getline(in, line);
    }
    wcout << line << endl;
    return 0;
}