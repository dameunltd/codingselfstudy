#include <iostream>
#include <string>

using namespace std;

class Entity
{
private:
    std::string m_Name;
    mutable int m_DebugCount = 0; //allow const functions in class to change m_DebugCount
public:
    const std::string& GetName() const
    {
        m_DebugCount++;
        return m_Name;
    }
};

int main()
{
    const Entity e;
    e.GetName();

    int x = 8;
    auto f = [=]() mutable // variables passed by value can be changed
    {
        x++;
        std::cout<<x<<std::endl;
    };

    f();
    // int x will still be set to '8'

    std::cin.get();
}
