#include <iostream>
#include <string>

#include <stdlib.h>
#include <string.h>

using namespace std;
using namespace std::string_literals;

int main()
{

    std::string name0 = "Dame"s + " hello"; /* 's' behind first string allows for the additon
                                                of another string*/

    const char* example = R"(Line1
    Line2
    Line3
    Line4)";

    const char* name = "Dame"; // string literal is actually 1 more value of actual string
    const wchar_t* name2 = L"Dame"; // 'L' declares string literal has wide characters

    const char16_t* name3 = u"Dame"; // char16 is 2 bites per character
    const char32_t* name4 = U"Dame"; // char32 is 4 bytes per character

    std::cout<< name0 <<std::endl;
    std::cout<<example<<std::endl;

    std::cin.get();
}
