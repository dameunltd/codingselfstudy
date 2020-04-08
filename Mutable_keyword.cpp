#include <iostream>

class Entity
{
private:
    std::string m_Name;
    mutable int m_DebugCount = 0; // Const methods in class allowed to change integer bc of mutable
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

    // below is Lambda, essentially a throwaway function to assign to a variable
    auto f = [=]() mutable // using '='+MUTABLE passes x variable by value instead of '&' through memory
    {
        x++;
        std::cout<<x<<std::endl;
    };

    f();
    std::cout<<x<<std::endl; // even though 'x' is incremented in Lambda, it doesn't change variable value

    std::cin.get();
}
