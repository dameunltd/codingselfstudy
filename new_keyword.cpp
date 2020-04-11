#include <iostream>
#include <string>

using String = std::string;

class Entity
{
private:
    String m_Name;
public:
    Entity() : m_Name("Unknown") {}
    Entity(const String& name) : m_Name(name) {}

    const String& GetName() const { return m_Name; }
 };

int main()
{
    int a = 2;
    int* b = new int[50]; // 200 bytes of memory (50x4bytes each)

    Entity* e = new Entity(); // memory and constructor allocated

    /*below code is same as line22 EXCEPT above calls Entity constructor, while
    below allocates memory then gives pointer to memory, not calling constructor*/
 //   Entity* e = (Entity*)malloc(sizeof(Entity));

    delete e;
    delete[] b; //when you create an array with new, use brackets when deleting

    std::cin.get();
}
